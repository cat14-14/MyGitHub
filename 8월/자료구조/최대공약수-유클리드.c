#include <stdio.h>
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = gcd(a, b);
    printf("%d", c);
}