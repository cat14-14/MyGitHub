#include <stdio.h>
int main(void)
{
    int a;
    printf("비밀번호를 입력하세요 : ");
    scanf("%d", &a);
    if(a==2323)
        printf("비밀번호 일치");
    else
        printf("입력하신 비밀번호 %d는 불일치합니다. 외부침입자입니다.", a);
}