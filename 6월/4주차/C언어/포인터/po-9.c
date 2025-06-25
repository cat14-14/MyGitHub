#include <stdio.h>
int multiply(int n){
    if(n == 1) return 2;
    return 2 * multiply(n-1);
}
int main(void){
    printf("%d\n", multiply(4));
    return 0;
}
//f(4) -> 2 * f(3) -> 2 * f(2) -> 2 * f(1) -> 2 => 2 * 2 * 2 * 2 * 2 => 16