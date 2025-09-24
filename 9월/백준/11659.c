#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int s[m][2];
    int sm[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        sm[i] = sum;
    }
    for(int i=0; i<m; i++){
        scanf("%d %d", &s[i][0], &s[i][1]);
    }
    for(int i=0; i<m; i++){
        if(s[i][0] == 1){
            printf("%d\n", sm[s[i][1]-1]);
        }
        else{
            printf("%d\n", sm[s[i][1]-1] - sm[s[i][0]-2]);
        }
    }
}