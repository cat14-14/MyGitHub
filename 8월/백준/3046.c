#include <stdio.h>

int main(void) {
    int R1, S;
    if (scanf("%d %d", &R1, &S) != 2) return 0;
    printf("%d\n", 2 * S - R1);
    return 0;
}
