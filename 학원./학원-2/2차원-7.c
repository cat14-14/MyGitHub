#include <stdio.h>
int main(void)
{
    int a[7][7], b[7][7];
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<7; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            b[i][j] = a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1];
        }
    }
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}