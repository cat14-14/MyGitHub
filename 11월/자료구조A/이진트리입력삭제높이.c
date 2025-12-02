#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* insert_node(Node* root, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) return root;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    if (root == NULL) return new_node;

    Node* cur = root;
    while (1) {
        if (data < cur->data) {
            if (cur->left == NULL) {
                cur->left = new_node;
                break;
            }
            cur = cur->left;
        } else if (data > cur->data) {
            if (cur->right == NULL) {
                cur->right = new_node;
                break;
            }
            cur = cur->right;
        } else {
            free(new_node);
            break;
        }
    }
    return root;
}

Node* delete_node(Node* root, int key) {
    if (root == NULL) return NULL;

    if (key < root->data) {
        root->left = delete_node(root->left, key);
    } else if (key > root->data) {
        root->right = delete_node(root->right, key);
    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        } else {
            Node* succ = root->right;
            while (succ->left != NULL) succ = succ->left;
            root->data = succ->data;
            root->right = delete_node(root->right, succ->data);
        }
    }
    return root;
}

int height(Node* node) {
    if (node == NULL) return 0;
    int hl = height(node->left);
    int hr = height(node->right);
    return (hl > hr ? hl : hr) + 1;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    Node* root = NULL;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        root = insert_node(root, x);
    }

    int key;
    scanf("%d", &key);
    root = delete_node(root, key);

    printf("%d\n", height(root));
    return 0;
}
