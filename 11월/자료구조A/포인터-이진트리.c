#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100 // 트리의 최대 노드 수

// 1. 노드 구조체 정의 (포인터 방식)
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// 2. "노드 포인터"를 저장할 배열
Node* tree[MAX_NODES];
int nodeCount = 0; // 현재까지 삽입된 노드의 개수 (다음 삽입될 인덱스)

// 새 노드 생성 헬퍼 함수
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 3. 완전 이진 트리에 노드 삽입 (핵심)
void insert(int data) {
    if (nodeCount >= MAX_NODES) {
        printf("트리가 가득 찼습니다.\n");
        return;
    }

    // 새 노드 생성
    Node* newNode = createNode(data);

    // 배열의 다음 위치에 새 노드의 '포인터'를 저장
    tree[nodeCount] = newNode;

    // 루트 노드가 아닌 경우, 부모 노드와 포인터 연결
    if (nodeCount > 0) {
        // 부모 노드의 인덱스 계산
        int parentIndex = (nodeCount - 1) / 2;
        
        // 현재 노드가 부모의 왼쪽 자식인지 오른쪽 자식인지 확인
        if (nodeCount % 2 == 1) { 
            // 홀수 인덱스 -> 왼쪽 자식
            tree[parentIndex]->left = newNode;
        } else {
            // 짝수 인덱스 -> 오른쪽 자식
            tree[parentIndex]->right = newNode;
        }
    }

    nodeCount++; // 노드 개수 증가
}

// 중위 순회 (포인터 기반의 표준 순회 방식 사용 가능)
void inorder(Node* node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

// 메모리 해제 (배열을 순회하며 모든 노드 해제)
void freeTree() {
    for (int i = 0; i < nodeCount; i++) {
        free(tree[i]);
        tree[i] = NULL;
    }
}

int main(void) {
    // 사용 전 배열 초기화 (필수)
    for (int i = 0; i < MAX_NODES; i++) {
        tree[i] = NULL;
    }
    // if(l < n) node[i] -> l = node[l];
    // if(r < n) node[i] -> r = node[r];

    // 완전 이진 트리의 레벨 순서대로 데이터 삽입
    insert(1); // 인덱스 0 (루트)
    insert(2); // 인덱스 1
    insert(3); // 인덱스 2
    insert(4); // 인덱스 3
    insert(5); // 인덱스 4
    insert(6); // 인덱스 5

    printf("중위 순회 (In-order): ");
    inorder(tree[0]); // 루트(tree[0])부터 순회 시작
    printf("\n");

    // 배열 인덱스로도 노드 접근 가능
    printf("배열 2번 인덱스 노드 데이터: %d\n", tree[2]->data); // 3
    
    // 포인터로도 자식 노드 접근 가능
    printf("배열 2번 인덱스 노드의 왼쪽 자식 데이터: %d\n", tree[2]->left->data); // 6

    // 메모리 해제
    freeTree();

    return 0;
}