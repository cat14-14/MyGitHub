#include <stdio.h>
int main(void){
    int n, k;
    int time = 0;
    scanf("%d %d", &n, &k);
    while(n!=1){
        if(n%k==0){
            n = n/k;
            time = time +1;
        }
        else{
            n = n-1;
            time = time +1;
        }
    }
    printf("%d\n", time);
}