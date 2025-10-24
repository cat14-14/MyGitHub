#include <stdio.h>

int min(int a, int b, int c) {
    int m = a < b ? a : b;
    return m < c ? m : c;
}

int main() {
    int n;
    scanf("%d", &n);

    int ugly[n];
    ugly[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;
    int n2 = 2, n3 = 3, n5 = 5;

    for (int i = 1; i < n; i++) {
        int n = min(n2, n3, n5);
        ugly[i] = n;

        if (n == n2) {
            i2++;
            n2 = ugly[i2] * 2;
        }
        if (n == n3) {
            i3++;
            n3 = ugly[i3] * 3;
        }
        if (n == n5) {
            i5++;
            n5 = ugly[i5] * 5;
        }
    }

    printf("%d\n", ugly[n - 1]);
    return 0;
}