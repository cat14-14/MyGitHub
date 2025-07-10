#include <stdio.h>
int main(void)
{
    int a,m,d,n;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    long long sum = a;
    for(int i = 1; i<n; i++)
    {
        sum = sum * m + d;
    }
    printf("%lld", sum);
}