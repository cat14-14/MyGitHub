#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    int b[m];
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[min])
            {
                min=j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    for(int i=0; i<m; i++){
        int m = 0;
        for(int j=0; j<n; j++){
            if(b[i] == a[j]){
                m = 1;
                break;
            }
        }
        if(m == 1){
            printf("yes ");
        }
        else{
            printf("no ");
        }
    }
}