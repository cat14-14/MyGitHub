#include <stdio.h>
int main(void)
{
    int a, sum =0;
    scanf("%d", &a);
    for(int i=a;i>=1;i--)
    {
        sum += i;
    }
    printf("%d", sum);
}