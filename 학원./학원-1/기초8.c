#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    if(a>0)
        printf("양수입니다.");
    else if(a==0)
        printf("양수도 음수도 아닙니다.");
    else
        printf("음수입니다.");
}