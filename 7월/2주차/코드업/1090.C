#include <stdio.h>
int main(void)
{
    int a,r,n;
    scanf("%d %d %d", &a, &r, &n);
    long long sum = a;
    for(int i = 1; i<n; i++)
    {
        sum *= r;
    }
    printf("%lld", sum);
}