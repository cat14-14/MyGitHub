#include <stdio.h>
int m[1000] = {0};
int fi(int n){
    if(n == 1 || n == 2) return 1;
    if(m[n] != 0) return m[n];
    return m[n] = fi(n-1) + fi(n-2);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fi(n));
}