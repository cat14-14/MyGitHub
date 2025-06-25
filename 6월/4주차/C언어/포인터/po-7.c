#include <stdio.h>
int f(int *arr, int len){
    int i, total = 0;
    for(i = 0; i < len; i++){
        if(i%2 == 0){
            *(arr + i) += i;
        }
        else{
            total += *(arr + i);
        }
    }
    return total;
}
int main(void){
    int nums[] = {2, 4, 6, 8, 10};
    int result = f(nums, 5);
    printf("%d %d\n", *(nums + 2), result);
    
}