#include <stdio.h>
int qicksort(int *arr, int left, int right){
    int pivot = left;
    int i = left + 1;
    int j = right;
    int temp;

    if(left >= right){
        return 0;
    }
    while(i <= j){
        while(arr[i] <= arr[pivot] && i <= right){
            i++;
        }
        while(arr[j] >= arr[pivot] && j > left){
            j--;
        }
        if(i > j){
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
        else{
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    qicksort(arr, left, j-1);
    qicksort(arr, j+1, right);
    return 0;
}
int main(void){
    int a = 20;
    int b[20];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    qicksort(b, 0, a-1);
    for(int i=0; i<a; i++){
        printf("%d ", b[i]);
    }
}