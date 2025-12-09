#include <stdio.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int data[MAX_HEAP_SIZE + 1];
    int size;
} MaxHeap;

void initHeap(MaxHeap *h) { // 힙 초기화 함수
    h->size = 0;
}

// 삭제 전용 (최댓값 삭제)
int deleteMaxHeap(MaxHeap *h) {
    if (h->size == 0) {
        printf("힙이 비어 있습니다.\n");
        return -1;
    }

    int maxValue = h->data[1]; // 최댓값 저장
    int temp = h->data[h->size--]; // 마지막 원소를 임시 저장하고 크기 감소

    int parent = 1; // 루트 노드부터 시작
    int child = 2; // 왼쪽 자식 노드

    while (child <= h->size) { // 자식 노드가 존재하는 동안
        // 오른쪽 자식 노드가 존재하고, 오른쪽 자식이 더 크면
        if (child < h->size && h->data[child] < h->data[child + 1]) {
            child++;
        }
        // 임시 저장한 값이 자식 노드보다 크거나 같으면 종료
        if (temp >= h->data[child]) break;

        h->data[parent] = h->data[child]; // 자식 노드를 부모 노드로 이동
        parent = child; // 아래로 이동
        child = parent * 2; // 왼쪽 자식 노드로 이동
    }

    h->data[parent] = temp; // 임시 저장한 값을 올바른 위치에 삽입
    return maxValue; 
}

void printHeap(MaxHeap *h) { // 힙 출력 함수
    printf("Heap: ");
    for (int i = 1; i <= h->size; i++) { // 1번 인덱스부터 출력
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int main() {
    MaxHeap h = {
        .data = {0, 50, 40, 30, 10, 20}, // 1번부터 사용
        .size = 5 // 현재 힙 크기
    };

    printHeap(&h);

    int removed = deleteMaxHeap(&h); // 최댓값 삭제
    printf("삭제된 값: %d\n", removed);

    printHeap(&h); // 삭제 후 힙 출력
    return 0;
}
