#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if(a>b)printf("%d",a-b);
    else printf("%d",b-a);
}