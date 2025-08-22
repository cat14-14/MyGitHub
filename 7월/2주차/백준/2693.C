#include <stdio.h>
void sort_desc(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}
int main(void) {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int arr[10]; 
 
        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }

        sort_desc(arr, 10);  
        printf("%d\n", arr[2]); 
    }

    return 0;
}
