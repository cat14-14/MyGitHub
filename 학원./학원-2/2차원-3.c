#include <stdio.h>
int main(void)
{
    int arr[5][5], n = 1;
    for(int i=0; i<5; i++)
    {
        if(i%2 == 1)
        {
            for(int j=4; j>=0; j--)
            {
                arr[i][j] = n++;
            }
        }
        else
        {
            for(int j=0; j<5; j++)
            {
                arr[i][j] = n++;
            }
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