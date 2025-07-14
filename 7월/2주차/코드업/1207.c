#include <stdio.h>

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sum = a + b + c + d;

    switch (sum) {
        case 0: printf("모\n"); break;
        case 1: printf("도\n"); break;
        case 2: printf("개\n"); break;
        case 3: printf("걸\n"); break;
        case 4: printf("윷\n"); break;
    }

    return 0;
}
