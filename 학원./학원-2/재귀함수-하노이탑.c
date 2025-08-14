#include <stdio.h>
int hanio(int n, int f, int e, int t)
{
    int sum = 0;
    if(n == 1)
        return sum;
    hanio(n-1, f, t, e);
    sum+=1;
    hanio(n-1, t, e, f);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", hanio(n, 1, 3, 2));
}