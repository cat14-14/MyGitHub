#include <stdio.h>
int f(int a)
{
    if(a < 1) return 1;
    f(a - 1);
    printf("%d\n", a);
}
int main(void)
{
    int a;
    scanf("%d", &a);
    f(a);
}