#include <stdio.h>
int main(void)
{
    int a, b=0, c=1;
    scanf("%d", &a);
    while(a>0)
    {
        while(b<c)
        {
            printf("*");
            b++;
        }
        printf("\n");
        a--;
        b=0;
        c++;
    }
}