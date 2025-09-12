#include <stdio.h>
int main(void)
{
    int arr[5][5], a[5], sum[5];
    for(int i = 0; i < 5; i++)
    {
        scanf("%d %d %d %d %d %d", &a[i], &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
        sum[i] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4];
    }
    printf("국어 : %.2f\n", (double)sum[0]/5);
    printf("영어 : %.2f\n", (double)sum[1]/5);
    printf("수학 : %.2f\n", (double)sum[2]/5);
    printf("사회 : %.2f\n", (double)sum[3]/5);
    printf("과학 : %.2f\n", (double)sum[4]/5);
}