#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("%d",10000+a*1000);
    }
    else if(a==b)
    {
        printf("%d", 1000+a*100);
    }
    else if(a==c)
    {
        printf("%d", 1000+a*100);
    }
    else if(c==b)
    {
        printf("%d", 1000+c*100);
    }
    else{
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        printf("%d", max * 100);

    }
}