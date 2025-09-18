#include <stdio.h>
#include <string.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}
int main() {
    char N_str[32];
    scanf("%s", N_str);
    long long L = 1;
    for (int i = 0; N_str[i]; i++) {
        int d = N_str[i] - '0';
        if (d != 0) {
            L = lcm(L, d);
        }
    }
    long long N;
    sscanf(N_str, "%lld", &N);
    long long base = N;
    long long pow10 = 1;
    for (int i = 0; i < 12; i++) {
        long long start = base * pow10;
        long long end = (base + 1) * pow10;

        long long k = (start + L - 1) / L * L;
        if (k < end) {
            printf("%lld\n", k);
            return 0;
        }
        pow10 *= 10;
    }
    return 0;
}
