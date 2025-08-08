#include <stdio.h>

int main() {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    A %= B;
    for (int i = 0; i < N - 1; i++) {
        A *= 10;
        A %= B;
    }

    A *= 10;
    printf("%d\n", A / B);

    return 0;
}
