#include <stdio.h>

int main(void)
{
    int x;
    int count = 0;
    scanf("%d", &x);

    while (x > 0)
    {
        if (x % 2 == 1)
            count++;
        x = x / 2;
    }

    printf("%d\n", count);
    return 0;
}
