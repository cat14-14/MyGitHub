#include <stdio.h>
int main(void)
{
    int a[10], sum=0, sum2=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 5 == 0)
            sum += a[i];
        else
            sum2 += a[i];
    }
    printf("%d\n%d", sum, sum2);
}