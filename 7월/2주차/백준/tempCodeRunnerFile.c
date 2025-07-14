#include <stdio.h>
int main(void)
{
    int n, i,j, k;
    scanf("%d", &n);
    for(i=0; i<2*n-1; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(j=0; j<n-i; j++)
        {
            printf("*");
        }
    }
}