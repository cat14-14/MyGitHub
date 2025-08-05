#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n == 1 || n == 3) {
        printf("-1\n");
        return 0;
    }

    int five = n / 5;
    int rem  = n % 5;

    if (rem % 2 == 0) {
        printf("%d\n", five + rem / 2);
        return 0;
    }

    if (five >= 1) {
        five -= 1;
        rem  += 5;
        printf("%d\n", five + rem / 2);
    } else {
        printf("-1\n");
    }
    return 0;
}
