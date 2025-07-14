#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%4d.%2d.%2d",&a,&b,&c);
    printf("%02d-%02d-%04d",c,b,a);
}