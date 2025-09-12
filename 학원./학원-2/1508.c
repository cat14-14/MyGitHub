#include <stdio.h>
int main(void)
{
    int n, arr[20][20];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i][0]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<i+1; j++)
        {
            arr[i][j] = arr[i][j-1] - arr[i-1][j-1];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}