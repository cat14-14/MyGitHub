#include <stdio.h>
#include <stdlib.h>

// ===========================================================
// 1) 트리 노드 구조체 정의
// ===========================================================
typedef struct Node {
    int data;              // 노드가 저장하는 값
    struct Node *left;     // 왼쪽 자식 노드
    struct Node *right;    // 오른쪽 자식 노드
} Node;


// ===========================================================
// 2) 새 노드를 생성하는 함수
// ===========================================================
Node* create_node(int value) {
    // 새 노드를 위한 메모리 동적 할당
    Node *node = (Node*)malloc(sizeof(Node));

    // 값 초기화
    node->data = value;
    node->left = NULL;     // 처음엔 자식 없음
    node->right = NULL;

    return node;
}


// ===========================================================
// 3) BST 삽입 함수
//    규칙: 왼쪽 < 부모 < 오른쪽
//
//    삽입 전략 (가장 쉬운 방법):
//    - 현재 노드가 NULL이면, 새 노드 생성하여 반환.
//    - 새 값이 작으면 왼쪽 서브트리로 이동.
//    - 새 값이 크면 오른쪽 서브트리로 이동.
// ===========================================================
Node* insert(Node *root, int value) {

    // (1) 현재 위치가 비어있으면 여기 넣으면 됨
    if (root == NULL) {
        return create_node(value);
    }

    // (2) 왼쪽에 들어가야 하는 경우
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // (3) 오른쪽에 들어가야 하는 경우
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    // (4) 같은 값은 아무것도 하지 않고 그대로 반환 (BST에서는 중복 허용 안 함)
    return root;
}


// ===========================================================
// 4) 가장 작은 값 찾기 (삭제에서 필요)
//    - 오른쪽 서브트리에서 왼쪽 끝까지 내려가면 최소값
// ===========================================================
Node* find_min(Node *root) {
    // 왼쪽이 더 이상 없으면 현재 노드가 최소값
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}


// ===========================================================
// 5) BST 삭제 함수
//    삭제 규칙: 세 가지 경우를 처리해야 한다.
//
//    (1) 삭제할 노드가 단말 노드(leaf) → 그냥 free
//    (2) 자식이 하나만 있는 경우 → 자식을 올려서 부모와 연결
//    (3) 자식이 두 개 있는 경우 → 오른쪽 서브트리의 최소값으로 대체
//
//    이 구현은 가장 기본적이고 쉬운 "재귀적" 삭제 방식
// ===========================================================
Node* delete(Node *root, int value) {

    if (root == NULL) return NULL; // 값이 없으면 종료

    // (1) 삭제하려는 값이 현재 노드보다 작으면 왼쪽으로
    if (value < root->data) {
        root->left = delete(root->left, value);
    }
    // (2) 삭제하려는 값이 현재 노드보다 크면 오른쪽으로
    else if (value > root->data) {
        root->right = delete(root->right, value);
    }
    // (3) root->data == value → 삭제해야 하는 위치 도달
    else {

        // ----------- Case 1: 자식이 없는 노드 (단말 leaf) -----------
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL; // 부모가 이 자리를 NULL로 받는다
        }

        // ----------- Case 2: 자식이 하나만 있는 경우 -----------

        // 왼쪽 없음 → 오른쪽 자식을 올림
        else if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        }

        // 오른쪽 없음 → 왼쪽 자식을 올림
        else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // ----------- Case 3: 자식이 두 개 있는 경우 -----------
        // 오른쪽 서브트리에서 최소값을 찾아 현재 노드 값으로 교체
        else {
            Node *minNode = find_min(root->right);
            root->data = minNode->data;                 // 값을 복사
            root->right = delete(root->right, minNode->data); // 실제로 그 노드를 삭제
        }
    }

    return root;    // 변경된 노드를 반환하여 부모가 연결을 갱신함
}


// ===========================================================
// 6) 중위 순회(Inorder Traversal) — 정렬된 순서로 출력됨
// ===========================================================
void inorder(Node *root) {
    if (root == NULL) return;

    inorder(root->left);            // 왼쪽 출력
    printf("%d ", root->data);      // 자기 자신 출력
    inorder(root->right);           // 오른쪽 출력
}


// ===========================================================
// 7) 메모리 해제
// ===========================================================
void free_tree(Node *root) {
    if (root == NULL) return;

    free_tree(root->left);
    free_tree(root->right);
    free(root);
}


// ===========================================================
// 8) main 함수 — 삽입 + 삭제 테스트
// ===========================================================
int main() {

    Node *root = NULL;  // 트리가 처음에는 비어 있음

    // 삽입 테스트
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("초기 트리 (중위 순회): ");
    inorder(root);
    printf("\n");

    // 삭제 테스트
    root = delete(root, 20);  // leaf 삭제
    root = delete(root, 30);  // 자식 1개 삭제
    root = delete(root, 50);  // 자식 2개 삭제

    printf("삭제 후 트리 (중위 순회): ");
    inorder(root);
    printf("\n");

    free_tree(root);

    return 0;
}
