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
    for(int i=0; i<k; i++){
        int min = 0;
        int max = 0;
        for(int o = 1; o<n; o++){
            if(a[min] > a[o]){
                min = o;
            }
        }
        for(int p = 1; p<n; p++){
            if(b[max] < b[p]){
                max = p;
            }
        }
        int temp = a[min];
        a[min] = b[max];
        b[max] = temp;
        printf("%d %d\n", a[min], b[max]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    printf("%d", sum);
}