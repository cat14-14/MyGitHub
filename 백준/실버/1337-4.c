#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    int max_count = 0; 

for (int i = 0; i < n; i++) {
    
    int current_count = 0; 

    for (int j = i; j < n; j++) {
        
        if (arr[j] >= arr[i] && arr[j] <= arr[i] + 4) {
            current_count++;
        }
    }

    if (current_count > max_count) {
        max_count = current_count;
    }
}

if (n == 0) {
    printf("5\n");
} else {
    printf("%d\n", 5 - max_count);
}
    
}