#include <stdio.h>
int fi(int n){
    int sum=0;
    if(n == 1 || n == 2)
        return sum;
    sum = fi(n-1) + fi(n-2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fi(n));
}