#include <stdio.h>
int sum(int a)
{
    if(a<2)
        return a;
    printf("%d\n", a);
    a = sum(a-=1);
}
int main(void)
{
    int a = 10, s;
    s = sum(a);
    printf("%d", s);
}