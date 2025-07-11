#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[101], b[101];  // 문자열로 입력 받기
    int sum = 0;

    scanf("%s %s", a, b);

    for(int i = 0; i < strlen(a); i++)
    {
                for(int j = 0; j < strlen(b); j++)
        {
            // 문자를 정수로 변환: '3' - '0' = 3
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }

    printf("%d\n", sum);

    return 0;
}
