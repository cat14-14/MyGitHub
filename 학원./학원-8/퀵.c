#include <stdio.h> // quick sort
int main(void){
    int a = 10;
    int b[10];
    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
    }
    
    int pivot = 0;
    int leftp;
    int left = 1;
    int rightp;
    int right = a-1;
    for(int i=0; i<a; i++){
        for(int j=left; j<right; j++){
            if(b[pivot] < b[j]){
                leftp = j;
                break;
            }
        }
        for(int k=right; k>left; k--){
            if(b[pivot] > b[k]){
                rightp = k;
                break;
            }
        }
        if(leftp > rightp){
            int temp = b[pivot];
            b[pivot] = b[rightp];
            b[rightp] = temp;
            pivot = rightp;
            break;
        }
        int temp = b[leftp];
        b[leftp] = b[rightp];
        b[rightp] = temp;
        left = leftp+1;
        right = rightp-1;
        
    }
    for(int i=0; i<a; i++){
        printf("%d ", b[i]);
    }
}