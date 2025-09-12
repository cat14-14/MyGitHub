#include <stdio.h>
int main(void)
{
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            if (i+j==99)
            {
                printf("%d %d %d %d\n", i/10, i%10, j/10, j%10);

            }
            
        }
    }
}