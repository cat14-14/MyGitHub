#include <stdio.h>

int r(int x, int count) {
    if (x == 1) return count;
    if (x % 5 == 0) {
        return r(x / 5, count + 1);
    }
    if ((x - 1) % 5 == 0) {
        return r((x - 1) / 5, count + 2);
    }
    if (x % 3 == 0) {
        return r(x / 3, count + 1);
    }
    if ((x - 1) % 3 == 0) {
        return r((x - 1) / 3, count + 2);
    }
    if (x % 2 == 0) {
        return r(x / 2, count + 1);
    }
    if ((x - 1) % 2 == 0) {
        return r((x - 1) / 2, count + 2);
    }
    return count;
}
int main(void) {
    int x;
    scanf("%d", &x);
    int result = r(x, 0);
    printf("%d", result);
    return 0;
}
