#include <stdio.h>
#include <node.h>

int main() {
    Node *head = NULL;
    node_push_front(&head, 10);
    node_push_front(&head, 20);
    node_push_front(&head, 30);

    node_print(head);
    node_free_all(&head);
    return 0;
}
