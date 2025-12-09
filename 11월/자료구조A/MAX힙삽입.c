#include <stdio.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int data[MAX_HEAP_SIZE + 1];
    int size;
} MaxHeap;

void initHeap(MaxHeap *h) { // 힙 초기화 함수
    h->size = 0;
}

// 삽입 전용
void insertMaxHeap(MaxHeap *h, int value) {
    if (h->size >= MAX_HEAP_SIZE) { // 힙이 가득 찼는지 확인
        printf("힙이 가득 찼습니다.\n");
        return;
    }

    int i = ++(h->size);

    while (i != 1 && value > h->data[i / 2]) { // 부모 노드와 비교
        h->data[i] = h->data[i / 2]; // 부모 노드를 아래로 이동
        i = i / 2;
    }
    h->data[i] = value; // 새 값을 올바른 위치에 삽입
    // XOR is exclusive, it is not allow same value
}

void printHeap(MaxHeap *h) { // 힙 출력 함수
    printf("Heap: ");
    for (int i = 1; i <= h->size; i++) { // 1번 인덱스부터 출력
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int main() {
    MaxHeap h;
    initHeap(&h); // 힙 초기화

    insertMaxHeap(&h, 10);
    insertMaxHeap(&h, 40);
    insertMaxHeap(&h, 15);
    insertMaxHeap(&h, 50);
    insertMaxHeap(&h, 30);

    printHeap(&h);
    return 0;
}
