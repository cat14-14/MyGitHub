#include <stdio.h>
int main(void)
{
    int arr[5][5], n = 1;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            arr[j][i] = n++;
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}