#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[7];         // 최대 6자리 16진수
    int result = 0;    // 최종 결과값
    scanf("%s", a);
    
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        int digit;

        // 문자가 0~9일 경우
        if (a[i] >= '0' && a[i] <= '9') {
            digit = a[i] - '0';
        }
        // 문자가 A~F일 경우
        else if (a[i] >= 'A' && a[i] <= 'F') {
            digit = a[i] - 'A' + 10;
        }

        result = result * 16  + digit;
    }

    printf("%d\n", result);
    return 0;
}
