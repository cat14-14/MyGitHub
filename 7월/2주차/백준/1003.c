#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        int zero = 1, one = 0;
        int temp;

        if (N == 0) {
            printf("1 0\n");
            continue;
        }

        for (int i = 1; i <= N; i++) {
            temp = one;
            one = zero + one;
            zero = temp;
        }

        printf("%d %d\n", zero, one);
    }

    return 0;
}
