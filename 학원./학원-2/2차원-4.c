#include <stdio.h>
int main(void)
{
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i == j)
                arr[i][j] = 1;
            else if(i < j)
                arr[i][j] = 2;
            else
                arr[i][j] = 3;
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