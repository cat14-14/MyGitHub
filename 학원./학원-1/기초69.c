#include <stdio.h>
int main(void)
{
    int a[10], sum=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 1 || a[i]%3==0)
            printf("%d ", a[i]);
    }
}