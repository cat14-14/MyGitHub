#include <stdio.h>

int main(void)
{
    int s, k;
    scanf("%d %d", &s, &k);

    int q = s / k;
    int r = s % k;

    long long result = 1;
    for (int i = 0; i < k - r; i++)
        result *= q;
    for (int i = 0; i < r; i++)
        result *= (q + 1);

    printf("%lld\n", result);
    return 0;
}
