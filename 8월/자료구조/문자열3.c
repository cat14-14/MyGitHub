#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int x = 0, y = 0, d = 0;

    for (int i = 1; i <= n * n; i++)
    {
        a[y][x] = i;

        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n || a[ny][nx] != 0)
        {
            d = (d + 1) % 4;
            nx = x + dx[d];
            ny = y + dy[d];
        }

        x = nx;
        y = ny;
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
