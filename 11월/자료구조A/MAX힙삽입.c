#include <stdio.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int data[MAX_HEAP_SIZE + 1];
    int size;
} MaxHeap;

void initHeap(MaxHeap *h) {
    h->size = 0;
}

// 삽입 전용
void insertMaxHeap(MaxHeap *h, int value) {
    if (h->size >= MAX_HEAP_SIZE) {
        printf("힙이 가득 찼습니다.\n");
        return;
    }

    int i = ++(h->size);

    while (i != 1 && value > h->data[i / 2]) {
        h->data[i] = h->data[i / 2];
        i = i / 2;
    }
    h->data[i] = value;
}

void printHeap(MaxHeap *h) {
    printf("Heap: ");
    for (int i = 1; i <= h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int main() {
    MaxHeap h;
    initHeap(&h);

    insertMaxHeap(&h, 10);
    insertMaxHeap(&h, 40);
    insertMaxHeap(&h, 15);
    insertMaxHeap(&h, 50);
    insertMaxHeap(&h, 30);

    printHeap(&h);
    return 0;
}
