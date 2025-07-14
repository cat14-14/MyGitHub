#include <stdio.h>

int main(void)
{
    int n, out = 0;
    int a[101] = {0};  // 입력값 b는 최대 100까지 가정

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int b;
        scanf("%d", &b);

        if(a[b] == 0)  // 처음 나온 값이면 체크
        {
            a[b] = 1;
        }
        else           // 이미 체크된 값이면 중복
        {
            out++;
        }
    }

    printf("%d\n", out);
    return 0;
}
