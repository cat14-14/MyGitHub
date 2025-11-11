#include <stdio.h>

#define MAX_NODES 100

// 포인터가 없는 간단한 노드 (혹은 그냥 int 배열 사용)
typedef struct Node {
    int data;
    // int isUsed; // 노드 사용 여부 플래그 (선택적)
} NodeData;

NodeData tree[MAX_NODES]; // 노드 '자체'를 저장하는 배열
int nodeCount = 0;

// 삽입 (훨씬 간단)
void insert_simple(int data) {
    if (nodeCount >= MAX_NODES) return;
    
    tree[nodeCount].data = data;
    nodeCount++;
}

// 순회 (포인터가 없으므로 '인덱스'를 재귀로 넘김)
void inorder_simple(int index) {
    if (index >= nodeCount) {
        return; // 배열 범위를 벗어나면 종료
    }

    int leftChildIndex = 2 * index + 1;
    int rightChildIndex = 2 * index + 2;

    inorder_simple(leftChildIndex);
    printf("%d ", tree[index].data);
    inorder_simple(rightChildIndex);
}

int main() {
    insert_simple(1);
    insert_simple(2);
    insert_simple(3);
    insert_simple(4);
    insert_simple(5);
    insert_simple(6);

    printf("단순 배열 중위 순회: ");
    inorder_simple(0); // 0번 인덱스(루트)부터 시작
    printf("\n");
    
    return 0;
}