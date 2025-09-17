#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode {
    element data;
    struct ListNode* next;
} Node;

int main(void) {
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *p = NULL;

    head = (Node*)malloc(sizeof(Node));
    first = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));

    head->data = 0;
    first->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }

    free(head);
    free(first);
    free(second);
    free(third);

    return 0;
}
