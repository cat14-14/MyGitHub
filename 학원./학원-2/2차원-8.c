#include <stdio.h>
int main(void)
{
    int arr[5][5], a[5], sum[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d %d %d %d %d %d", &a[i], &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
        sum[i] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4];
    }
    for(int i=0; i<5; i++)
    {
        printf("%d %d\n", a[i], sum[i]);
    }
}