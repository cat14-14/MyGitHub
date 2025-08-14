#include <stdio.h>
int main(void)
{
    int a=1, b;
    scanf("%d", &b);
    while(a<=b)
    {
        printf("%d ", 8*a);
        a++;
    }
}