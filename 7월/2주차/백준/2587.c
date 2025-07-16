#include <stdio.h>

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main(void) {
    int a[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    sort(a, 5);


    printf("%d\n", sum / 5);
    printf("%d\n", a[2]); 
    
    return 0;
}
