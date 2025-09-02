#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int num = 1;

    for (int s = 0; s < n + m - 1; s++) {
        for (int i = s; i >= 0; i--) {
            int j = s - i;
            if (i >= 0 && i < n && j >= 0 && j < m) {
                arr[i][j] = num;
                num++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
