#include <stdio.h>
#include "sort.h"

int main(void) {

    int arr[10] = {5, 2, 9, 1, 7, 3, 6, 4, 8, 0};

    sort(arr, 10, SORT_MERGE);

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
