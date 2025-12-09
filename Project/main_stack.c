// main_stack.c
#include <stdio.h>
#include <node.h>
#include "stack.h"

int main(void) {
    Stack s;
    stack_init(&s);

    // push
    stack_push(&s, 10);
    stack_push(&s, 20);
    stack_push(&s, 30);

    stack_print(&s);  // Top -> [30 -> 20 -> 10]

    // peek
    int top;
    if (stack_peek(&s, &top)) {
        printf("peek: %d\n", top);  // 30
    }

    // pop
    int value;
    while (stack_pop(&s, &value)) {
        printf("popped: %d\n", value);
        stack_print(&s);
    }

    stack_clear(&s);
    return 0;
}
