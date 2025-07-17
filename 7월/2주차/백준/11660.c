#include <stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);
    int a[1001][1001] = {0};
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            a[i][j] = j;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}