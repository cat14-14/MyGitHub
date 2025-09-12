#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ag = (a+b+c) / 3;
    if(ag>=90)
        printf("A\n");
    else if(ag>=80)
        printf("B\n");
    else if(ag>=70)
        printf("C\n");
    else if(ag>=50)
        printf("D\n");
    else
        printf("F\n");
    printf("%d", ag>=90 ? 4 : ag>=80 ? 3 : ag>=70 ? 2 : ag>=50 ? 1 : 0);
}