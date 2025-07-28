#include <stdio.h>

int main(void)
{
    int n, m = 1;
    int a[100][100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[j][i] = m++;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
