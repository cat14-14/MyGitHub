#include <stdio.h>

int main(void)
{
    int n;
    printf("배열 크기를 입력하세요 (최대 10): ");
    scanf("%d", &n);

    int a[10][10];

    printf("%d x %d 배열의 값을 입력하세요:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    printf("대각선 합: %d\n", sum);
    return 0;
}
