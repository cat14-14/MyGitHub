#include <stdio.h>
int main(void)
{
    int a,b;
    scnaf("%d %d", &a, &b);
    if(a>b)
        printf("%d", a-b);
    else if(a<b)
        printf("%d", b-a);
}