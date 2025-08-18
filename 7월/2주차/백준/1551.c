#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, k;
    int a[21], b[21];
    scanf("%d %d", &n, &k);
    getchar();
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            scanf("%d,", &a[i]);
        else
            scanf("%d", &a[i]);
    }
    for (int t = 0; t < k; t++) {
        for (int i = 0; i < n - 1 - t; i++) {
            b[i] = a[i + 1] - a[i];
        }
        for (int i = 0; i < n - 1 - t; i++) {
            a[i] = b[i];
        }
    }
    for (int i = 0; i < n - k; i++) {
        printf("%d", a[i]);
        if (i < n - k - 1) printf(",");
    }

    return 0;
}
