#include <stdio.h>
int main(void)
{
    int a, c=0;
    scanf("%d", &a);
    while(a>=500)
    {
        a-=500;
        c++;
    }
        while(a>=100)
    {
        a-=100;
        c++;
    }
        while(a>=50)
    {
        a-=50;
        c++;
    }
        while(a>=10)
    {
        a-=10;
        c++;
    }
        while(a>=5)
    {
        a-=5;
        c++;
    }
        while(a>=1)
    {
        a-=1;
        c++;
    }
}