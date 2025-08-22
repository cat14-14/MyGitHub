#include <stdio.h>
int main(void)
{
    int arr[8];
    for(int i=0; i<7; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<7; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n%d", arr[6], arr[5]);
}