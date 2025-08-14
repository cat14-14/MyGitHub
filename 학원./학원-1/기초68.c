#include <stdio.h>
int main(void)
{
    int a[10], sum=1;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(i % 2 == 1)
            sum *= a[i];
    }
    printf("%d", sum);
}