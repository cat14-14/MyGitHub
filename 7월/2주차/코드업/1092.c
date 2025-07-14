#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m=8,n=0;
    scanf("%d %d %d",&a,&b,&c);
    int day=1;
    while(day%a!=0 || day%b!=0 || day%c!=0) day++;
    printf("%d", day);
}