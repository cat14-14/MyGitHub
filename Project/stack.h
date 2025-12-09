// stack.h
#ifndef STACK_H
#define STACK_H

#include <node.h>    // 또는 "node.h"

// 스택 구조체 정의
typedef struct Stack {
    Node *top;       // 스택의 맨 위 노드
} Stack;

/* 함수 선언들 */
void stack_init(Stack *s);
int  stack_is_empty(const Stack *s);
void stack_push(Stack *s, int data);
int  stack_pop(Stack *s, int *out_value);
int  stack_peek(const Stack *s, int *out_value);
void stack_clear(Stack *s);
void stack_print(const Stack *s);

#endif // STACK_H
