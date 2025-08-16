#include <stdio.h>
int main(void)
{
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for(int i=0; i<3; i++)
    {
        int min = i;
        for(int j=i+1; j<3; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(int i=0; i<3; i++)
    {
        printf("%d ", arr[i]);
    }
}