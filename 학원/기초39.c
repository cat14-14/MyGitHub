#include <stdio.h>
int main(void)
{
    int a=1, b=0;
    while(a<=5)
    {
        while(b<a)
        {
            printf("*");
            b++;
        }
        printf("\n");
        b = 0;
        a++;
    }
}