#include <stdio.h>
int main(void)
{
    int a=0, b=0, c=0, d=0, e=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    while(a>=100)
    {
        scanf("%d", &a);
    }
        while(b>=100)
    {
        scanf("%d", &b);
    }
        while(c>=100)
    {
        scanf("%d", &c);
    }
        while(d>=100)
    {
        scanf("%d", &d);
    }
        while(e>=100)
    {
        scanf("%d", &e);
    }
    printf("%d", a+b+c+d+e);
}