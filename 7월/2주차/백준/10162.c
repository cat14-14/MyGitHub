#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    if (t % 10 != 0) {
        printf("-1\n");
        return 0;
    }
    int a=0,b=0,c=0;
    while ((t>=300))
    {
        t-=300;
        a++;
    }
    while (t>=60)
    {
        t-=60;
        b++;
    }
    while (t>=10)
    {
        t-=10;
        c++;
    }
    printf("%d %d %d", a,b,c);
    
    
}