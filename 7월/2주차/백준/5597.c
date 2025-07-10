#include <stdio.h>
int main(void)
{
    int a[30]={0,}, n;
    for(int j = 0; j<28; j++)
    {
        scanf("%d", &n);
        a[n] = 1;
    }
    for(int i =0; i<30; i++)
    {
        if(a[i]==0)
        {
            printf("%d",a[i]);
        }
    }
}