#include <stdio.h>
int main(void){
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i] == m)
            sum++;
    }
    if(sum != 0){
        printf("%d", sum);
    }
    else
        printf("-1");
}