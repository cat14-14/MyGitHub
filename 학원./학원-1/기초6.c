#include <stdio.h>
int main(void)
{
    int a,b;
    printf("가로의 길이를 입력하세요 : ");
    scanf("%d", &a);
    printf("\n세로의 길이를 입력하세요 : ");
    scanf("%d", &b);
    printf("사각형의 둘레는 %d이고, 넓이는 %d입니다", a*b/2 ,a*b);
}