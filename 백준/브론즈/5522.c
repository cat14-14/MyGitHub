#include <stdio.h>

int main(void) {
    int sum = 0, x;
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &x) != 1) return 0;
        sum += x;
    }
    printf("%d\n", sum);
    return 0;
}
