#include <stdio.h>

int main(void)
{
    long long int n = 0;
    long long int a[1000000];

    for (int t = 0; t < 3; t++)
    {
        scanf("%lld", &n);
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            sum += a[i];
        }

        if (sum == 0)
            printf("0\n");
        else if (sum > 0)
            printf("+\n");
        else
            printf("-\n");
    }

    return 0;
}
