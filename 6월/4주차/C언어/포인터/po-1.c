#include <stdio.h>
int main(void){
    int *a;
    int b[5] = {2, 4, 7};
    a = b;
    printf("%d %d %d\n", *a+3, *(a+3), a+3);
}