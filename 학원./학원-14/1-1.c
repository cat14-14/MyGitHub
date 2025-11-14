#include <stdio.h>
int main(void){
    int n, m, count=0;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        int max = i;
        for(int j=i+1; j<n; j++){
            if(a[max] < a[j]){
                max = j;
            }
        }
        int temp = a[max];
        a[max] = a[i];
        a[i] = temp;
    }
    while(m > 0){
        int found = 0;
        for(int i=0; i<n; i++){
            if(m >= a[i]){
                m -= a[i];
                count++;
                found = 1;
                break;
            }
        }
        if(!found){
            count = -1;
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}