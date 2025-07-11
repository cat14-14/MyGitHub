#include <stdio.h>
int main(void)
{
    int  x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int m1,m2,m3;
    m1 = x < w-x ? x : w-x;
    m2 = y < h-y ? y : h-y;
    m3 = m1 < m2 ? m1 : m2;
    printf("%d", m3);
}