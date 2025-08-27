#include <stdio.h>

int main(void) {
    long long N, S;
    while (scanf("%lld %lld", &N, &S) == 2) {
        printf("%lld\n", S / (N + 1));
    }
    return 0;
}
