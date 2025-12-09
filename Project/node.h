// node.h
#ifndef NODE_H
#define NODE_H

#include <stdio.h>  // printf 사용을 위해

// 단일 연결 리스트용 노드 구조체
typedef struct Node {
    int data;           // 저장할 값 (단순하게 int로 고정)
    struct Node *next;  // 다음 노드 포인터
} Node;

/*
 * 새 노드를 힙(동적 메모리)에 하나 생성한다.
 *  - data: 저장할 값
 *  - 반환: 성공 시 Node* (next는 NULL로 초기화), 실패 시 NULL
 */
Node* node_create(int data);

/*
 * 리스트의 앞(head)에 노드를 하나 삽입한다.
 *  - head: 리스트의 시작 주소를 가리키는 포인터의 주소
 *    (함수 안에서 head 자체가 바뀔 수 있으므로 Node** 사용)
 *  - data: 새로 넣고 싶은 값
 */
void node_push_front(Node **head, int data);

/*
 * 리스트의 뒤(tail)에 노드를 하나 삽입한다.
 *  - head: 리스트의 시작 주소를 가리키는 포인터의 주소
 *  - data: 새로 넣고 싶은 값
 */
void node_push_back(Node **head, int data);

/*
 * 리스트의 맨 앞 노드를 하나 꺼내면서 삭제한다.
 *  - head: 리스트의 시작 주소를 가리키는 포인터의 주소
 *  - out_value: 꺼낸 값이 필요하면 여기에 저장 (NULL이면 값은 무시)
 *  - 반환: 성공 시 1, 리스트가 비어있어 꺼낼 게 없으면 0
 */
int node_pop_front(Node **head, int *out_value);

/*
 * 리스트의 모든 원소를 [a -> b -> c] 형태로 출력한다.
 *  - head: 리스트의 시작 노드 포인터 (const: 함수가 리스트를 변경하지 않음)
 */
void node_print(const Node *head);

/*
 * 리스트의 모든 노드를 free() 해서 메모리를 해제한다.
 *  - head: 리스트의 시작 주소를 가리키는 포인터의 주소
 *  - 함수가 끝난 뒤에는 *head 가 NULL 이 된다.
 */
void node_free_all(Node **head);

#endif // NODE_H
