#include <stdio.h>
int main(void){
    int a = 10;
    int b[100];
    int c[100] = {0,};

    for(int i=0; i<a; i++){
        scanf("%d", &b[i]);
        c[b[i]] += 1;
    }
    for(int i=0; i<100; i++){
        if(c[i] >= 0){
            for(int j=0; j<c[i]; j++){
            printf("%d ", i);
        }
        }
    }
}