#include <stdio.h>
int sum(int a)
{
    if(a<2)
        return a;
    sum(a-=1);
    printf("%d\n", a);
}
int main(void)
{
    int a = 10, s;
    sum(a);
}