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

    scanf("%d", &head->data);
    scanf("%d", &first->data);
    scanf("%d", &second->data);
    scanf("%d", &third->data);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    int sum = 0, count = 0;
    p = head;
    while (p != NULL) {
        sum += p->data;
        count++;
        p = p->next;
    }
    double avg = (double)sum / count;
    printf("평균값: %.2f\n", avg);
    free(head);
    free(first);
    free(second);
    free(third);

    return 0;
}
