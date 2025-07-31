#include <stdio.h>
int main(void)
{   
    int a, j;
    scanf("%d",  &a);
    for(int i=0; i<a+(a-1); i++)
    {
        if(i<a)
        {
            for(j=0; j<i+1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if(i>a)
        {
            for(int k=j-1; k>0; k--)
            {
                printf("*");
            }
            j--;
            printf("\n");
        }
    }
}