#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i <= n ? i : 2 * n - i;
        int spaces = (n - stars) * 2;

        // 왼쪽 별
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        // 가운데 공백
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        // 오른쪽 별
        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
