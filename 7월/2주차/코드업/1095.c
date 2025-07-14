#include <stdio.h>
int main(void)
{
    int a[1000000] = {}, n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min = a[0];
    for(i = 1; i < n; i++)
        if(min > a[i])
        {
            min = a[i];
        }
    printf("%d", min);
}