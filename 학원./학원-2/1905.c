#include <stdio.h>
int sum(int a)
{
    if(a <= 1)
        return 1;
    return a+sum(a-1);
}
int main(void)
{
    int a, result;
    scanf("%d", &a);
    printf("%d", sum(a));
}