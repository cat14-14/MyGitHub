#include <stdio.h>
//바이너리 서치 트리의 중위 순회는 오름차순으로 정렬된 값을 출력합니다.

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
Node *root;

Node* search(int key, Node* node) { // 재귀 버전
    if(node == NULL){
        return NULL;
    }
    if(node->data == key){
            return node;
    }
    else if(node->data < key){
        return search(key, node->right);
    }
    else{
        return search(key, node->left);
    }

}
int main(void){
    Node n1 = {10, NULL, NULL};
    Node n2 = {30, NULL, NULL};
    Node n3 = {20, &n1, &n2};
    int key = 20;
    root = &n3;

    Node* result = search(key, root);
    if (result != NULL) {
        printf("key %d : node address = %p\n", key, (void*)result);
        printf("found data = %d\n", result->data);
    } else {
        printf("key %d not found\n", key);  
    }

    return 0;
}