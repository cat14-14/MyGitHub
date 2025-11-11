#include <stdio.h>
int main(void){
    int n, sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] == (arr[i+1]+1)){
            sum++;
        }
    }
    if(sum <= 5){
        printf("%d", 5-sum);
    }
    else{
        printf("0");
    }
}