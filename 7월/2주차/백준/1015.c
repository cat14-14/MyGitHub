#include <stdio.h>
int main(void)
{
    int n;
    int a[1000];
    int b[1000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int r = 0;
    for(int i = 0; i < n; i++)
    {
        int min = 0;
        for(int j = 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        b[min] = r;
        a[min] = 1001;
        r++;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}
