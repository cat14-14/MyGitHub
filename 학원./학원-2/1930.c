#include <stdio.h>

int dp[15][15];

int supersum(int k, int n) {
    if (k == 0) return n;
    if (dp[k][n] != 0) return dp[k][n];

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += supersum(k-1, i);
    }
    dp[k][n] = sum;
    return sum;
}

int main(void) {
    int k, n;
    while (scanf("%d %d", &k, &n) != EOF) {
        printf("%d\n", supersum(k, n));
    }
    return 0;
}