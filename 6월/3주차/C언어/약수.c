#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[50];
    int min = 1000001, max = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", min * max);
    return 0;
}