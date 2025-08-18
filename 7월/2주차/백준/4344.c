#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    int a[1000];

    while (t--)
    {
        int n, sum = 0;
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        float avg = (float)sum / n;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > avg) {
                count++;
            }
        }

        float p = (float)count / n * 100.0;
        printf("%.3f%%\n", p);
    }

    return 0;
}
