#include <stdio.h>
int main(void)
{
    int a;
    scnaf("%d", &a);
    if(a%2==0)
        printf("짝수입니다.");
    else
        printf("홀수입니다.");
}