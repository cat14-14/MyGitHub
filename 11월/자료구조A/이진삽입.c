#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
Node *root;

Node* search(int key);

Node* insert_node(Node* root_node, Node* new_node) {
    if (new_node == NULL) return root_node;
    if (root_node == NULL) return new_node;

    Node* cur = root_node;
    while (1) {
        if (new_node->data < cur->data) {
            if (cur->left == NULL) {
                cur->left = new_node;
                break;
            }
            cur = cur->left;
        } else if (new_node->data > cur->data) {
            if (cur->right == NULL) {
                cur->right = new_node;
                break;
            }
            cur = cur->right;
        } else {
            break;
        }
    }
    return root_node;
}
int main(void){
    Node n[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &n[i].data);
        n[i].left = NULL;
        n[i].right = NULL;
    }

    root = NULL;
    for (int i = 0; i < 10; ++i) {
        if (root == NULL) root = &n[i];
        else insert_node(root, &n[i]);
    }
    int key = 20;

    Node* result = search(key);
    if (result != NULL) {
        printf("key %d : node address = %p\n", key, (void*)result);
        printf("found data = %d\n", result->data);
    } else {
        printf("key %d not found\n", key);  
    }

    return 0;
}

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