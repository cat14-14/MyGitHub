#include <stdio.h>

int main(void)
{
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    A %= B;

    for (int i = 1; i <= N; i++) {
        A *= 10;
        int digit = A / B;
        A %= B;

        if (i == N)
            printf("%d\n", digit);
    }

    return 0;
}
