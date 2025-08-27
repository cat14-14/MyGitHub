#include <stdio.h>
int main(void)
{
    int a, b, d, c;
    scanf("%d %d", &a, &b);
    d = (a>b ? b : a);
    for(int i=2; i<=d; i++)
    {
        if(a%i==0 && b%i==0)
        {
            c = d;
        }
    }
    printf("%d", c);
}