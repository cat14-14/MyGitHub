#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int d[1001];
    d[1] = 1;
    d[2] = 3;
    for(int i=3; i<n+1; i++){
        d[i] = (d[i-1] + 2*d[i-2]);
    }
    printf("%d\n", d[n]);
}