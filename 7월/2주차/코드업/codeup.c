#include <stdio.h>
int main(void)
{
    int a,b;
    int bb = b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a*(b%10));
    b/=10;
    printf("%d\n", a*((b%10)));
    b/=10;
    printf("%d\n", a*((b%10)));
    printf("%d", a*bb);
}