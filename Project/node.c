// node.c
#include <stdlib.h>
#include "node.h"

// 새 노드를 동적 할당해서 생성
Node* node_create(int data) {
    Node *n = (Node*)malloc(sizeof(Node));  // Node 크기만큼 메모리 할당
    if (n == NULL) {
        // 메모리 부족
        return NULL;
    }
    n->data = data;     // 값 설정
    n->next = NULL;     // 기본은 끝 노드 상태
    return n;
}

// 리스트 앞에 삽입: head가 바뀔 수 있으므로 Node** 사용
void node_push_front(Node **head, int data) {
    if (head == NULL) return;  // 방어 코드

    Node *n = node_create(data);
    if (n == NULL) {
        // 메모리 부족 시 그냥 실패
        return;
    }

    n->next = *head;   // 새 노드의 next가 기존 head를 가리키게
    *head = n;         // head를 새 노드로 변경
}

// 리스트 뒤에 삽입
void node_push_back(Node **head, int data) {
    if (head == NULL) return;

    Node *n = node_create(data);
    if (n == NULL) {
        return;
    }

    // 리스트가 비어 있으면 head 자체를 새 노드로
    if (*head == NULL) {
        *head = n;
        return;
    }

    // 끝 노드까지 이동
    Node *cur = *head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = n;  // 마지막 노드의 next를 새 노드로
}

// 리스트 앞에서 하나 꺼내기 + 삭제
int node_pop_front(Node **head, int *out_value) {
    if (head == NULL || *head == NULL) {
        // 빈 리스트
        return 0;
    }

    Node *first = *head;

    // 값이 필요하면 저장
    if (out_value != NULL) {
        *out_value = first->data;
    }

    // head를 다음 노드로 이동
    *head = first->next;

    // 기존 첫 노드는 free
    free(first);

    return 1;
}

// 리스트 전체 출력
void node_print(const Node *head) {
    const Node *cur = head;
    printf("[");
    while (cur != NULL) {
        printf("%d", cur->data);
        if (cur->next != NULL) {
            printf(" -> ");
        }
        cur = cur->next;
    }
    printf("]\n");
}

// 리스트 전체 free
void node_free_all(Node **head) {
    if (head == NULL) return;

    Node *cur = *head;
    while (cur != NULL) {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
    *head = NULL;  // 밖에서도 NULL로 보이게
}
