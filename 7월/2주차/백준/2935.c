#include <stdio.h>
int main(void)
{
    long long int a, c;
    char b;
    scanf("%lld\n%c\n%lld", &a, &b, &c);
    if(b == '+')
    {
        printf("%lld", a + c);
    }
    else if(b == '*')
    {
        printf("%lld", a * c);
    }
}