#include <stdio.h>
#include <stdlib.h>

//예외 처리 비어있다면 NULL 반환
//key < data 왼쪽 서브트리(재귀)
//key > data 오른쪽 서브트리(재귀)
//key == data
    //왼쪽 자식 ==NULL
        //오른쪽 자식 반환
    //오른쪽 자식 == NULL
        //왼쪽 자식 반환
    //양쪽 자식 모두 존재, temp에다 최대 또는 최소 값을 넣는다. FoundMax, FoundMin 함수 필요
        //오른쪽 서브트리에서 가장 작은 노드 찾기

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

Node* delect_node(Node* root_node, int key){
    Node* parent = NULL;
    Node* cur = root_node;
    if(cur == NULL) return NULL;
    if(cur->data < key){
        delect_node(cur->right, key);
    }
    else if(cur->data > key){
        delect_node(cur->left, key);
    }
    else if(key == cur->data){
        if(cur->left == NULL){
            cur = cur->right;
            return cur;
        }
        else if(cur->right == NULL){
            cur = cur->right;
            return cur;
        }
        else{

        }
    }
}

Node* FindMin(Node* node){
    
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
    
    int keys[5];
    for(int i=0; i<5; i++){
        scanf("%d", &keys[i]);
        delect_node(root, keys[i]);
    }
    return 0;
}