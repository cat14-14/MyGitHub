#include <stdio.h>

int main(void)
{
    int a[10];
    int check[42] = {0};
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        int mod = a[i] % 42;
        if(check[mod] == 0)
        {
            check[mod] = 1;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

