#include <stdio.h>
int main(void)
{
    for(int i=1; i<=5; i++)
    {
        for(int k=0; k<5-i; k++)
        {
            printf(" ");
        }
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}