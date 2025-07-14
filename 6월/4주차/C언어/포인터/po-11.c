#include <stdio.h>
void Binary(int n){
    if(n == 0) return;
    Binary(n / 2);
    printf("%d", n % 2);
}
int main(void){
    int num;
    scanf("%d", &num);
    Binary(num);
    printf("\n");
    return 0;
}