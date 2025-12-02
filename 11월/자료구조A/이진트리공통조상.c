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

Node* lca(Node* root, int a, int b) {
    Node* cur = root;
    while (cur != NULL) {
        if (a < cur->data && b < cur->data) {
            cur = cur->left;
        } else if (a > cur->data && b > cur->data) {
            cur = cur->right;
        } else {
            return cur;
        }
    }
    return NULL;
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

    int a, b;
    scanf("%d %d", &a, &b);

    Node* anc = lca(root, a, b);
    if (anc != NULL) printf("%d\n", anc->data);
    else printf("-1\n");

    return 0;
}
