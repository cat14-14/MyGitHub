#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    int b[30];
    for(int i=0; i<a; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=1; i<a; i++){
        for(int j=0; j<i; j++){
            if(b[i] < b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
        printf("step : %d\n", i);
            for(int k=0; k<a; k++){
                printf("%d ", b[k]);
            }
            printf("\n");
    }
    printf("\n");
    for(int i=0; i<a; i++)
    {
        printf("%d ", b[i]);
    }
}