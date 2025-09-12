#include <stdio.h>
int main(void)
{
    for(int i=2; i<=8; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                printf("%d*%d=%2d\n", i, j, i*j);
            }
        }
    }
}