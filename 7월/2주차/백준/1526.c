#include <stdio.h>

int is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return 0; 
        n /= 10;
    }
    return 1; 
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int max = 0;

    while (n >= max)
    {
        if (is_lucky(n)) {
            max = n;
            break;
        }
        n--;
    }

    printf("%d\n", max);
    return 0;
}
