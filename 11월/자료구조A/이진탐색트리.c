#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
Node *root;

Node* search(int key) {
    Node* node = root;
     while(node != NULL){
        if(node->data == key){
            return node;
        }
        else if(node->data < key){
            node = node->right;
        }
        else{
            node = node->left;
        }
    }
    return NULL;
}
int main(void){
    /* 올바른 이진탐색트리(BST) 구성: root=20, left=10, right=30 */
    Node n1 = {10, NULL, NULL};
    Node n2 = {30, NULL, NULL};
    Node n3 = {20, &n1, &n2};
    int key = 20;
    root = &n3;

    Node* result = search(key);
    if (result != NULL) {
        printf("key %d : node address = %p\n", key, (void*)result);
        printf("found data = %d\n", result->data);
    } else {
        printf("key %d not found\n", key);  
    }

    return 0;
}