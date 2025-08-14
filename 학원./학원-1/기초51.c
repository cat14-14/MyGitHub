#include <stdio.h>
int main(void)
{
    int a, sum=0, c;
    scanf("%d", &a);
    for(int i=0; i<a; i++)
    {
        scanf("%d", &c);
        if(c>=100 || c<10)
            i--;
        if(c/10 == 3 || c%10 == 7)
            sum += c;
    }
    printf("%d", sum);
}