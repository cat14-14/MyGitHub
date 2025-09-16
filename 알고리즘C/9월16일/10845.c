#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int pop(Queue *q){
    if(q->size == 0) return -1;
    int ret = q->data[q->front];
    q->front++;
    q->size = q->rear - q->front;
    return ret;
}

int top(Queue *q){
    if(q->size == 0) return -1;
    return q->data[(q->rear)-1];
}
int empty(Queue *q){
    if(q->size == 0) return 1;
    return 0;
}
int front(Queue *q){
    if(q->size == 0) return -1;
    return q->data[q->front];
}
int back(Queue *q){
    if(q->size == 0) return -1;
    return q->data[(q->rear)-1];
}
int main()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    init(q);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char cmd[10];
        scanf("%s", cmd);

        if (strcmp(cmd, "push") == 0) {
            int val;
            scanf("%d", &val);
            push(q, val);
        }
        else if (strcmp(cmd, "pop") == 0) {
            printf("%d\n", pop(q));
        }
        else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", size(q));
        }
        else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", empty(q));
        }
        else if (strcmp(cmd, "front") == 0) {
            printf("%d\n", front(q));
        }
        else if (strcmp(cmd, "back") == 0) {
            printf("%d\n", back(q));
        }
    }
}