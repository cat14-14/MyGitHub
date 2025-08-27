#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    while(b!=0)
    {
        int d = a % b;
        a = b;
        b = d;
    }
    printf("%d", a);
}