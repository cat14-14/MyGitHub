#include <stdio.h>
int s(int a[], int n, int t, int index) {
    if (index >= n) return 0;
    if (a[index] == t) return 1;
    return s(a, n, t, index + 1);
}

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
    for(int i = 0; i < m; i++){
        if (s(a, n, b[i], 0)) {
            printf("yes ");
        } else {
            printf("no ");
        }
    }
}