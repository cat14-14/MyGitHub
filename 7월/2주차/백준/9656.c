#include <stdio.h>
int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    puts((n % 2) ? "CY" : "SK");
    return 0;
}
