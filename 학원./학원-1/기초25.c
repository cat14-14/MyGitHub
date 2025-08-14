#include <stdio.h>
int main(void)
{
    int a=1, b, sum=0;
    scanf("%d", &b);
    while(a<=b)
    {
        if(a%2!=0)
            sum += a;
        a++;
    }
    printf("%d", sum);
}