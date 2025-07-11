#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10000], b[10000];  // 문자열로 입력 받기
    long long int sum = 0;

    scanf("%s %s", a, b);
    int len1, len2;
    len1 = strlen(a);
    len2 = strlen(b);
    for(int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            sum = sum + (a[i] - '0') * (b[j] - '0');
        }
    }
    printf("%lld", sum);
}
