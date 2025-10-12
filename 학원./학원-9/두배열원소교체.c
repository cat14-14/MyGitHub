#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    int m = 0;
    for(int i=0; i<n; i++){
            if(m < k){
                int max = a[0];
                for(int j=0; j<n; j++){
                    if(max < b[j]){
                        max = b[j];
                    }
                }
                if(a[i] < max){
                    int temp = a[i];
                    a[i] = max;
                    max = temp;
                }
                else{
                    break;
                }
                m++;
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    printf("%d", sum);
}