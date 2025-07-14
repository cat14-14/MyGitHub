#include <stdio.h>
int solve(int n){
    if(n<=1) return 1;
    if(n%2==0)
    {
        return solve(n-1) + solve(n-2);
    }
    return solve(n-1);
}
int main(void){
    printf("%d\n", solve(5));
    return 0;
}

// f(5)
// f(4)
// f(3), f(2)
//f(2), f(1) + f(0)
//f(1)+f(0)
// = 4

