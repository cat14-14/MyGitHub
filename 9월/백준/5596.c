#include <stdio.h>
int main(void)
{
    int a[5], b[5];
    int sum1=0, sum2=0;
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    scanf("%d %d %d %d", &b[0], &b[1], &b[2], &b[3]);
    for(int i=0; i<4; i++)
    {
        sum1 += a[i];
        sum2 += b[i];
    }
    if(sum1 > sum2) printf("%d\n", sum1);
    else if(sum1 < sum2) printf("%d\n", sum2);
    else printf("%d\n", sum1);
}