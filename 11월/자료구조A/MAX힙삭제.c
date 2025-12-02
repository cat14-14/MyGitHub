#include <stdio.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int data[MAX_HEAP_SIZE + 1];
    int size;
} MaxHeap;

void initHeap(MaxHeap *h) {
    h->size = 0;
}

// 삭제 전용 (최댓값 삭제)
int deleteMaxHeap(MaxHeap *h) {
    if (h->size == 0) {
        printf("힙이 비어 있습니다.\n");
        return -1;
    }

    int maxValue = h->data[1];
    int temp = h->data[h->size--];

    int parent = 1;
    int child = 2;

    while (child <= h->size) {
        if (child < h->size && h->data[child] < h->data[child + 1]) {
            child++;
        }

        if (temp >= h->data[child]) break;

        h->data[parent] = h->data[child];
        parent = child;
        child = parent * 2;
    }

    h->data[parent] = temp;
    return maxValue;
}

void printHeap(MaxHeap *h) {
    printf("Heap: ");
    for (int i = 1; i <= h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int main() {
    MaxHeap h = {
        .data = {0, 50, 40, 30, 10, 20}, // 1번부터 사용
        .size = 5
    };

    printHeap(&h);

    int removed = deleteMaxHeap(&h);
    printf("삭제된 값: %d\n", removed);

    printHeap(&h);
    return 0;
}
