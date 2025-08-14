#include <stdio.h>
int main(void)
{
    int a=5, b=0, c = 5-a;
    while(a>=1)
    {
        while(c>0)
        {
            printf(" ");
            c--;
        }
        while(b<a)
        {
            printf("*");
            b++;
        }
        printf("\n");
        b = 0;
        a--;
        c=5-a;
    }
}