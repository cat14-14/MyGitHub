#include <stdio.h>
int main(void)
{
    int w,h;
    scanf("%d %d", &h, &w);
    int a[101][101] = {0}, n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int l,d,x,y;
        scanf("%d %d %d %d", &l, &d, &x, &y);
        for(int k=0; k<l; k++)
        {
            if(d == 0)
            {
                a[x][y+k] = 1;
            }
            else{
                a[x+k][y] = 1;
            }
        }
        
        
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            printf("%d", a[i][j]);
            if (j != w) putchar(' ');
        }
        putchar('\n');
    }
}