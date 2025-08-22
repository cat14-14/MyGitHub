#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 1:
            printf("1은 one");
            break;
        case 2:
            printf("2는 two");
            break;
        case 3:
            printf("3은 three");
            break;
        default:
            printf("똑바로 입력하세요");
    }
}