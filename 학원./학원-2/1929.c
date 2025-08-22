#include <stdio.h>
int ub(int a)
{
    if(a == 1)
    {
        printf("1\n");
        return 1;
    }
    if(a%2==1)
        ub(3*a+1);
    else
        ub(a/2);
    printf("%d\n", a);
}
int main(void)
{
    int a;
    scanf("%d", &a);
    ub(a);
}