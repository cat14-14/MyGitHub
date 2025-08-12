#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int cnt[51] = {0};
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        if (0 <= x && x <= 50) cnt[x]++;
    }

    for (int t = 50; t >= 0; t--) {
        if (cnt[t] == t) {
            printf("%d", t);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
