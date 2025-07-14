#include <stdio.h>
int main(void)
{
    int n;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // 앞쪽 공백 출력 (n-1-i개)
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // 별 출력 (2*i+1개)
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}