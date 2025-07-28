#include <stdio.h>

int main(void)
{
    int n, out = 0;
    int a[101] = {0}; 

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int b;
        scanf("%d", &b);

        if(a[b] == 0) 
        {
            a[b] = 1;
        }
        else     
        {
            out++;
        }
    }

    printf("%d\n", out);
    return 0;
}
