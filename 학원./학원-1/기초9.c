#include <stdio.h>
int main(void)
{
    int a;
    printf("졸업시험점수를 입력하세요. : ");
    scanf("%d", &a);
    if(a>=70)
        printf("졸업이 가능합니다.");
    else
        printf("졸입이 불가능합니다.");
}