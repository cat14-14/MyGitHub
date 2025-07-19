#include <stdio.h>

int main(void)
{
    int a[5][4]; 
    int sum[5] = {0}; 

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    int max = 0;
    for (int i = 1; i < 5; i++)
    {
        if (sum[i] > sum[max])
        {
            max = i;
        }
    }

    printf("%d %d\n", max + 1, sum[max]);
    return 0;
}
