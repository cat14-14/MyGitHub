#include <stdio.h>

int main(void)
{
    int a[20][20] = {0};
    int n, x, y;

    /* 초기 바둑판 상태 입력 */
    for (int i = 1; i <= 19; i++)
        for (int j = 1; j <= 19; j++)
            scanf("%d", &a[i][j]);

    /* 좌표 개수 */
    scanf("%d", &n);

    /* 좌표마다 가로·세로 뒤집기 */
    for (int k = 0; k < n; k++)
    {
        scanf("%d %d", &x, &y);

        /* 가로줄 */
        for (int j = 1; j <= 19; j++)
            a[x][j] = !a[x][j];

        /* 세로줄 */
        for (int i = 1; i <= 19; i++)
            a[i][y] = !a[i][y];
    }

    /* 결과 출력 */
    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            printf("%d", a[i][j]);
            if (j != 19) putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
