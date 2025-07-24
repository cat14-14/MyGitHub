#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num, min = 100, sum = 0;
        for(int i=0; i<7; i++)
        {
            scanf("%d", &num);
            if(num%2==0)
            {
                sum+=num;
                if(min>num) min = num;
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}