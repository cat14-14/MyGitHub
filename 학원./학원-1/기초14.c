#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    printf("%d\n", a>b?a-b:b-a);
    scanf("%d", &c);
    printf("%s", c%2==0 ? "짝수입니다." : "홀수입니다.");
}