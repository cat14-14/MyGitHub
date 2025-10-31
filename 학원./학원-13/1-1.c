#include <stdio.h>

int main(void) {
    int a[4][5];
    int visited[4][5] = {0};
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == 0 && visited[i][j] == 0) {
                visited[i][j] = 1;
                if (j + 1 < 5 && a[i][j + 1] == 0 && visited[i][j + 1] == 0)
                    visited[i][j + 1] = 1;
                if (i + 1 < 4 && a[i + 1][j] == 0 && visited[i + 1][j] == 0)
                    visited[i + 1][j] = 1;
                if (j - 1 >= 0 && a[i][j - 1] == 0 && visited[i][j - 1] == 0)
                    visited[i][j - 1] = 1;
                if (i - 1 >= 0 && a[i - 1][j] == 0 && visited[i - 1][j] == 0)
                    visited[i - 1][j] = 1;
                count++;
            }
        }
    }

    printf("얼릴 수 있는 음료수 개수: %d\n", count);
    return 0;
}