#include <stdio.h>
int main(void)
{
    int n;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // ���� ���� ��� (n-1-i��)
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        // �� ��� (2*i+1��)
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}