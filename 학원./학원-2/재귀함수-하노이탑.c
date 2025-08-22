#include <stdio.h>
int sum = 0;
int hanio(int n, int f, int e, int t)
{
    if(n == 1)
    {
        printf("%d -> %d\n", f, t);
        sum++;
        return 1;
    }
    hanio(n-1, f, t, e);
    printf("%d -> %d\n", f, t);
    sum++;
    hanio(n-1, t, e, f);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", hanio(n, 1, 3, 2));
    printf("%d", sum);
}