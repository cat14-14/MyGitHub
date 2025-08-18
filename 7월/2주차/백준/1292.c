#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int sequence[1001];
    int idx = 0;

    for (int i = 1; idx < B; i++) {
        for (int j = 0; j < i && idx < B; j++) {
            sequence[idx++] = i;
        }
    }

    int sum = 0;
    for (int i = A - 1; i < B; i++) {
        sum += sequence[i];
    }

    printf("%d\n", sum);
    return 0;
}
