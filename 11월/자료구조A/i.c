#include <stdio.h>
#include <sort.h>

int main() {
    int arr[] = {5, 3, 1, 4, 2, 10, 20, 15, 30, 19, 25, 18, 17, 16, 14, 13, 12, 11, 9, 8, 7, 6};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arrsize, SORT_QUICK);

    for (int i = 0; i < arrsize; i++)
        printf("%d ", arr[i]);

    return 0;
}