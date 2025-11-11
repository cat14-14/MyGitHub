#include <stdio.h>

int Rev(int n) {
    int reversed_num = 0;
    
    while (n > 0) {
        reversed_num = (reversed_num * 10) + (n % 10);
        n = n / 10;
    }
    
    return reversed_num;
}

int main(void) {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int rev_X = Rev(X);
    int rev_Y = Rev(Y);
    
    int sum = rev_X + rev_Y;
    
    int result = Rev(sum);
    
    printf("%d\n", result);
    
    return 0;
}