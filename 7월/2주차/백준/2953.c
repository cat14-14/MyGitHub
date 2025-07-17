#include <stdio.h>
int main(void)
{
    int a[6][6];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scafn("%d", &a[i][j]);
        }
    }
}