#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m=8,n=0;
    scanf("%lf %lf %lf",&a,&b,&c);
    n=a*b*c;
    n=n/8388608;
    printf("%.2lf MB",n);
    
}