#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    char s[50][51]; // 최대 50개, 문자열 최대 길이 50 + '\0'

    // 문자열 입력
    for (int i = 0; i < N; i++)
    {
        scanf("%s", s[i]);
    }

    int len = strlen(s[0]); // 모든 문자열 길이는 같음

    // 각 문자 위치를 비교
    for (int i = 0; i < len; i++)
    {
        char ch = s[0][i]; // 첫 번째 문자열 기준
        int same = 1;

        for (int j = 1; j < N; j++)
        {
            if (s[j][i] != ch)
            {
                same = 0;
                break;
            }
        }

        if (same)
            printf("%c", ch);
        else
            printf("?");
    }

    printf("\n");
    return 0;
}
