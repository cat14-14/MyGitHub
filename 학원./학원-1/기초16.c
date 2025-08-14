#include <stdio.h>
int main(void)
{
    int a;
    printf("시험점수를 입력하세요 : ");
    scanf("%d", &a);
    if(a == 100)
        printf("조기졸업");
    else if(a >= 80)
        printf("정상졸업");
    else if(a >= 40)
        printf("방과후 수업");
    else if(a >= 0)
        printf("졸업 X");
}