#include <stdio.h>
int main(void)
{
    int arr[5][5], n = 1;
    for(int i=0; i<5; i++)
    {
        if(i == 0 || i == 4)
            for(int j=0; j<5; j++)
                arr[i][j] = n++;
        else if(i == 1 || i == 3)
            for(int j=0; j<5; j++)
                if(j == 0 || j == 4)
                    arr[i][j] = 0;
                else
                    arr[i][j] = n++;
        else
            for(int j=0; j<5; j++)
                if(i == 2 && j == 2)
                    arr[i][j] = n++;
                else
                    arr[i][j] = 0;
        
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] != 0)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}