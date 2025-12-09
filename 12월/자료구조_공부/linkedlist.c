#include <stdio.h>
#include <stdlib.h>

// ===============================
// 1) 노드 구조체 정의
// ===============================
typedef struct Node {
    int data;            // 노드에 저장되는 값
    struct Node *next;   // 다음 노드를 가리키는 포인터
} Node;


// ===============================
// 2) 새 노드 생성 함수
// ===============================
Node* create_node(int value) {
    Node *new_node = (Node*)malloc(sizeof(Node));  // 새 노드 메모리 할당
    new_node->data = value;                        // 값 저장
    new_node->next = NULL;                         // 다음 노드는 없음
    return new_node;
}


// ===============================
// 3) 리스트에 값 삽입 (가장 쉬운 방식: 맨 앞에 삽입)
// ===============================
void insert_front(Node **head, int value) {
    Node *new_node = create_node(value);  // 새 노드 만들기
    new_node->next = *head;               // 새 노드가 기존 head를 가리키게 함
    *head = new_node;                     // head를 새 노드로 변경
}


// ===============================
// 4) 리스트 역순 출력 (재귀 사용)
// ===============================
void print_reverse(Node *head) {
    if (head == NULL) return;         // 끝까지 갔으면 종료
    print_reverse(head->next);        // 재귀 호출: 끝까지 내려감
    printf("%d ", head->data);        // 돌아오면서 값 출력 → 역순 출력됨
}


// ===============================
// 5) 메모리 해제
// ===============================
void free_list(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;          // 현재 노드 임시 저장
        head = head->next;    // 다음 노드로 이동
        free(temp);           // 임시 저장된 노드 해제
    }
}


// ===============================
// 6) main 함수
// ===============================
int main() {
    Node *head = NULL;    // 처음 리스트는 비어 있음

    insert_front(&head, 10);  // 값을 순서대로 삽입
    insert_front(&head, 20);
    insert_front(&head, 30);
    insert_front(&head, 40);

    printf("역순 출력 결과: ");
    print_reverse(head);   // 역순 출력
    printf("\n");

    free_list(head);       // 메모리 해제
    return 0;
}
