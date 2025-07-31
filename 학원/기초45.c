#include <stdio.h>
int main(void)
{
    int a=9, b=9;
    while(a>=1)
    {
        while(b>=1)
        {
            printf("%dX%d = %d\n", a, b, a*b);
            b--;
        }
        b=9;
        a--;

    }
}