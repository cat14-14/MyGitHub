#include <stdio.h>

int main(void)
{
    int a[50] = {0};
    int freq[50] = {0};
    int n = 0, maxVal = 0;

    while (n < 50) {
        scanf("%d", &a[n]);
        if (a[n] == 0) break;
        if (a[n] > maxVal) maxVal = a[n];
        n++;
    }

    for (int i = 0; i < n; i++) {
            freq[a[i] - 1]++;
    }

    for (int i = 0; i < maxVal; i++) {
        printf("%d ", i + 1);
    }
    printf("\n");

    for (int i = 0; i < maxVal; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");

    int mi = 0, m = freq[0];
    for (int i = 1; i < maxVal; i++) {
        if (freq[i] > m) {
            m = freq[i];
            mi = i;
        }
    }
    printf("%d\n", mi + 1);

    return 0;
}
