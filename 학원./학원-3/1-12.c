#include <stdio.h>
int main(void)
{
    int a=0;
    while(a<5)
    {
        for(int i=0; i<a; i++)
            printf("O");
        printf("*\n");
        a++;
    }
}