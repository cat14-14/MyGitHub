#include <stdio.h>
int main(void)
{
    int a, b=0, c=0;
    scanf("%d", &a);
    while(b<3)
    {
        
        while(c<a)
        {
            printf("*");
            c++;
        }
        printf("\n");
        b++;
        c=0;
    }
}