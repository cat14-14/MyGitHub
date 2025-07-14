#include <stdio.h>

int is_lucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return 0; // 금민수가 아님
        n /= 10;
    }
    return 1; // 금민수임
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int max = 0;

    while (n >= max)  // n부터 4까지 내려가면서 찾음
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
