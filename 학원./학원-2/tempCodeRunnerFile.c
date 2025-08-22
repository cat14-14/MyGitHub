#include <stdio.h>
int ub(int a)
{
    printf("%d\n", a);
    if(a == 1)
        return 1;
    if(a%2==1)
        ub(3*a+1);
    else
        ub(a/2);
}
int main(void)
{
    int a;
    scanf("%d", &a);
    ub(a);
}