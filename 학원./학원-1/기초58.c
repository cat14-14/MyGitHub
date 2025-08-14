#include <stdio.h>
int main(void)
{   
    int a;
    scanf("%d",  &a);
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=a-1; i>0; i--)
    {
        for(int j=i; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}