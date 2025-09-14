#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    int count=0;
    while(x!=1)
    {
        if(x%5==0)
        {
            x/=5;
            count++;
        }
        else if((x-1)%5==0)
        {
            x -= 1;
            count++;
            x /= 5;
            count++;
        }
        else if(x%3==0)
        {
            x/=3;
            count++;
        }
        else if ((x-1)%3==0)
        {
            x-=1;
            count++;
            x/=3;
            count++;
        }
        else if(x%2==0)
        {
            x/=2;
            count++;
        }
        else if((x-1)%2==0)
        {
            x-=1;
            count++;
            x/=2;
            count++;
        }
        
    }
    printf("%d", count);
}