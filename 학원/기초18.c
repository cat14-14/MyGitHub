#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if((a/(b*b)) < 18.5)
        printf("저체중");
    else if(((a/(b*b)) >= 18.5) && ((a/(b*b)) < 23))
        printf("정상");
    else if(((a/(b*b)) >= 23) && ((a/(b*b)) < 25))
        printf("과체중");
    else if(((a/(b*b)) >= 25) && ((a/(b*b)) < 30))
        printf("비만");
    else
        printf("고도비만");
}