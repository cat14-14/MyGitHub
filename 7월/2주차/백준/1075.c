#include <stdio.h>
int main(void)
{
    int n, f;
    scanf("%d %d", &n, &f);
    int m = n%100;
    for(int i=0; i<100; i++)
    {
        if((n-m+i) % f == 0)
        {
            printf("%02d", i);
            return 0;
        }
    }

}