#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) {
        int n, m;
        scanf("%d %d", &n, &m);

        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int dp[n][m];
        for (int i = 0; i < n; i++) {
            dp[i][0] = a[i][0];
        }
        for (int j = 1; j < m; j++) {
            for (int i = 0; i < n; i++) {
                int left_up = (i > 0) ? dp[i - 1][j - 1] : 0;
                int left = dp[i][j - 1];
                int left_down = (i < n - 1) ? dp[i + 1][j - 1] : 0;

                dp[i][j] = a[i][j] + max(left, max(left_up, left_down));
            }
        }
        int result = dp[0][m - 1];
        for (int i = 1; i < n; i++) {
            if (dp[i][m - 1] > result) {
                result = dp[i][m - 1];
            }
        }
        printf("%d\n", result);
    }

    return 0;
}