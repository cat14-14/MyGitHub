#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct queue
{
    int *data;
    int size;
    int front; // 0
    int rear; // 0
} Queue;

void init(Queue *q){
    q->front = q->rear = q->size = 0;
    q->data = (int *)malloc(sizeof(int) * SIZE);
}

void push(Queue *q, int x){
    if(q->rear == SIZE) return;
    q->data[(q->rear)++] = x;
    q->size = q->rear - q->front;
}

void pop(Queue *q){
    if(q->size == 0) return;
    q->front++;
    q->size = q->rear - q->front;
}

int top(Queue *q){
    if(q->size == 0) return -1;
    return q->data[(q->rear)-1];
}

int main()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    init(q);
    push(q, 3);
    push(q, 6);
    push(q, 9);
    printf("%d\n", top(q));
    pop(q);
    pop(q);
    pop(q);
    pop(q);
    printf("%d\n", top(q));
    return 0;
}