#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

  
    for (int i = 0; i < n; ++i) {
        for (int s = 0; s < i; ++s)      putchar(' ');
        for (int k = 0; k < 2 * (n - i) - 1; ++k) putchar('*');
        putchar('\n');
    }

    for (int i = 1; i < n; ++i) {
        for (int s = 0; s < n - i - 1; ++s) putchar(' ');
        for (int k = 0; k < 2 * i + 1; ++k) putchar('*');
        putchar('\n');
    }

    return 0;
}
