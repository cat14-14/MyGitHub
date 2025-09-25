#include <stdio.h>
#include <stdlib.h>

    typedef int element;
    typedef struct ListNode {
        element data;
        struct ListNode* next;
    } Node;

Node* createNode(int value){
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node* insert_first(Node* head){
    Node* newNode = createNode(50);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* insert(Node* head, Node* pre){
    // Node* pre = head;            pre가 가리키는 노드가 헤드랑 같다.
    // if(조건)                     예: pre -> data == 10
    Node* newNode = createNode(70);
    newNode->next = pre->next;
    pre->next = newNode;
    return head;
}

Node* insert_last(Node* head){
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
}

int mian(void){

}