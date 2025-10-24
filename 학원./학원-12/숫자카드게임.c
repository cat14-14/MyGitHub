#include <stdio.h>
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int card[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &card[i][j]);
        }
    }
    int min[n];
    for(int i=0; i<n; i++){
        min[i] = card[i][0];
        for(int j=1; j<m; j++){
            if(card[i][j] < min[i]){
                min[i] = card[i][j];
            }
        }
    }
    int min_value = min[0];
    for(int i=1; i<n; i++){
        if(min[i] > min_value){
            min_value = min[i];
        }
    }
    printf("%d\n", min_value);
}