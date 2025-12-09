// stack.c
#include "stack.h"

// 스택 초기화
void stack_init(Stack *s) {
    if (s == NULL) return;
    s->top = NULL;
}

// 스택이 비었는지 확인
int stack_is_empty(const Stack *s) {
    if (s == NULL) return 1;
    return (s->top == NULL);
}

// push: 맨 앞에 삽입 = node_push_front 재사용
void stack_push(Stack *s, int data) {
    if (s == NULL) return;
    node_push_front(&s->top, data);
}

// pop: 맨 앞에서 꺼내기 = node_pop_front 재사용
int stack_pop(Stack *s, int *out_value) {
    if (s == NULL) return 0;
    return node_pop_front(&s->top, out_value);
}

// peek: top 값만 읽기
int stack_peek(const Stack *s, int *out_value) {
    if (s == NULL || s->top == NULL) return 0;
    if (out_value != NULL) {
        *out_value = s->top->data;
    }
    return 1;
}

// 스택 전체 비우기
void stack_clear(Stack *s) {
    if (s == NULL) return;
    node_free_all(&s->top);
}

// 디버깅용 출력
void stack_print(const Stack *s) {
    if (s == NULL) {
        printf("Stack(NULL)\n");
        return;
    }
    printf("Top -> ");
    node_print(s->top);  // [a -> b -> c] 형태로 출력
}
