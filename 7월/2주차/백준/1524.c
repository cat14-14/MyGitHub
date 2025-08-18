#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int power, maxN = 0, maxM = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &power);
            if (power > maxN)
                maxN = power;
        }
        for (int j = 0; j < m; j++) {
            scanf("%d", &power);
            if (power > maxM)
                maxM = power;
        }

        if (maxN >= maxM)
            printf("S\n");
        else
            printf("B\n");
    }

    return 0;
}
