#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char map[50][51];
    for (int i = 0; i < n; i++) {
        scanf("%s", map[i]);
    }

    int maxSize = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 1; i + k < n && j + k < m; k++) {
                if (map[i][j] == map[i][j + k] &&
                    map[i][j] == map[i + k][j] &&
                    map[i][j] == map[i + k][j + k]) {
                    int size = (k + 1) * (k + 1);
                    if (size > maxSize)
                        maxSize = size;
                }
            }
        }
    }

    printf("%d\n", maxSize);
    return 0;
}
