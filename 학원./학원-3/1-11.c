#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(1)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if(a >= 1 && b >= 1 && c >= 1 && d >= 1 && e >= 1) break;
    }
    printf("%d %d %d %d %d\n", a, b, c, d, e);
}