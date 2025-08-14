#include <stdio.h>
int main(void)
{
    int a,b;
    printf("첫 번째 사람의 태어난 달 : ");
    scanf("%d", &a);
    printf("두 번째 사람의 태어난 달 : ");
    scanf("%d", &b);
    if(a/3 == 1 && b/3 == 1 )
        printf("두 사람의 태어난 계절이 같습니다.");
    else if(a/3 == 2 && b/3 == 2)
        printf("두 사람의 태어난 계절이 같습니다.");
    else if(a/3 == 3 && b/3 == 3)
        printf("두 사람의 태어난 계절이 같습니다.");
    else if((a==1 || a==2 || a==12) && (b==1||b==2||b==12))
        printf("두 사람의 태어난 계절이 같습니다.");
    else
        printf("두 사람의 태어난 계절이 다릅니다.");
}