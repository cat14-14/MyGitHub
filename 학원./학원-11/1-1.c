#include <stdio.h>

#define MAX 1000001
int dp[MAX];
int r(int x) {
    if (x == 1) return 0;
    if (dp[x] != -1) return dp[x];
    int res = r(x - 1) + 1;
    if (x % 2 == 0) {
        int temp = r(x / 2) + 1;
        if (temp < res) res = temp;
    }
    if (x % 3 == 0) {
        int temp = r(x / 3) + 1;
        if (temp < res) res = temp;
    }
    if (x % 5 == 0) {
        int temp = r(x / 5) + 1;
        if (temp < res) res = temp;
    }
    dp[x] = res;
    return res;
}

int main(void) {
    int x;
    scanf("%d", &x);
    for (int i = 0; i <= x; i++) dp[i] = -1;
    int result = r(x);
    printf("%d\n", result);
    return 0;
}