#include <stdio.h>
int main(void)
{
    int m, y, x, a[2]={1,0,0};
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d", &x, &y);
        int temp = a[x];
        a[x] = a[y];
        a[y] = a[temp];
    }
    for(int j=0; j<m; j++)
    {
        if(a[j] == 1)
        {
            printf("%d", j);
            return 0;
        }
    }
    printf("-1");
}