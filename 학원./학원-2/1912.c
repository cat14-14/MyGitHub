#include <stdio.h>
int sum=1;
int fi(int n){
    if(n < 1)
        return sum;
    sum*=n;
    fi(n-1);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fi(n));
}