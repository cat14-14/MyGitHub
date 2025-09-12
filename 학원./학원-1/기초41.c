#include <stdio.h>
int main(void)
{
    int a=5, b=0;
    while(a>=1)
    {
        while(b<a)
        {
            printf("*");
            b++;
        }
        printf("\n");
        b = 0;
        a--;
    }
}