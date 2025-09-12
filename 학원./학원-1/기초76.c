#include <stdio.h>
int main(void)
{
    int a[10], b[10]={1,1,1,1,1,1,1,1,1,1};
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(a[j] > a[i])
                b[i]++;
        }
    }
    for(int k=0; k<10; k++)
    {
        printf("%d %d등\n", a[k], b[k]);
    }
}