#include <stdio.h>
int main()
{
    int sum, a;
    while(1)
    {
        scanf("%d", &a);
        if(a == 0) break;
        sum += a;
    }
    printf("%d\n", sum);
}