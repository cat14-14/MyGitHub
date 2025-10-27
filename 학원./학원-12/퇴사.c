#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int t[n];
    int p[n];
    int sum[n];
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    for(int j=0; j<n; j++){
        for(int i=j; i<n; i++){
        sum[j] += p[i];
        i+=t[i];
    }
    }
    int max = sum[0];
    for(int i=0; i<n; i++){
        if(sum[i]>max){
            max = sum[i];
        }    
    }
    printf("%d\n", max);
}