#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int d[n];
    for(int i=0; i<n; i++){
        scanf("%d", &d[i]);
    }
    int found = 0;
    for(int i=0; i<n; i++){
        int max = d[i];
        for(int j=i+1; j<n; j++){
            if(d[j] > max){
                max = j;
            }
            int temp = d[i];
            d[i] = d[max];
            d[max] = temp;
        }
    }
    for(int i=0; i<n; i++){
        while(m - d[i] > 0)
        {
            m -= d[i];
            found++;
        }
    }
    if(found == 0){
        printf("-1");
    }
    else{
        printf("%d", found);
    }

}