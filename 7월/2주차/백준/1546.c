#include <stdio.h>
int main(void)
{
    int n, a[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max=a[0];
    for(int j=1; j<n; j++)
    {
        if(max < a[j])
            max = a[j];
    }
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (double)a[i] / max * 100;
    }

    printf("%.02lf\n", sum / n);
    return 0;
}