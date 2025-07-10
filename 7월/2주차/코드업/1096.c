#include <stdio.h>

int main(void)
{
    int board[19][19] = {0};  // 0~18 인덱스 사용
    int n, x, y;

    /* 돌 개수 입력 */
    scanf("%d", &n);

    /* 좌표 입력 → 1을 빼서 0-기반으로 변환 */
    for (int k = 0; k < n; ++k)
    {
        scanf("%d %d", &x, &y);
        board[x - 1][y - 1] = 1;
    }

    /* 출력: 행-끝에는 공백 없이 개행만 */
    for (int i = 0; i < 19; ++i)
    {
        for (int j = 0; j < 19; ++j)
        {
            printf("%d", board[i][j]);
            if (j != 18)          // 마지막 열이 아니면 공백 추가
                putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
