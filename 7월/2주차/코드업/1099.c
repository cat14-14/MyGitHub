#include <stdio.h>

int main(void)
{
    int maze[10][10];

    // 입력
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            scanf("%d", &maze[i][j]);

    int x = 1, y = 1;

    while (1)
    {
        if (maze[x][y] == 0)
            maze[x][y] = 9;
        else if (maze[x][y] == 2) {
            maze[x][y] = 9;
            break;
        }

        // 다음 위치 판단
        if (maze[x][y + 1] != 1)
            y++;
        else if (maze[x + 1][y] != 1)
            x++;
        else
            break; // 더 이상 이동할 수 없음
    }

    // 출력
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", maze[i][j]);
            if (j != 9) putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
