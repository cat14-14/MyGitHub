#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* stack[STACK_SIZE];
int top = -1;

int empty() {
    return top == -1;
}

void push(Node* node){
    if(top < STACK_SIZE - 1)
        stack[++top] = node;
    else
        printf("스택 오버플로우\n");
}

Node* pop() {
    if(!empty)
        return stack[top--];
    else
        return NULL;
}

void inorder(Node* node) {
    Node* current = node;

    while(current != NULL || !empty()) {
        while(current){
            push(current);
            current = current -> left;
        } // 왼쪽 끝까지 내려가기
        current = pop();
        printf("%d", current->data);
        current = current -> right;
    }
}

int main(){
    // 트리 구조
    
}