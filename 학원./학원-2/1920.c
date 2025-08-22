#include <stdio.h>
int ch(int a)
{
    if(a == 0)
    {
        printf("0");
        return 0;
    }
    ch(a/2);
    printf("%d", a%2);
    
}
int main(void)
{
    int a;
    scanf("%d", &a);
    ch(a);
}