#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int *a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int *u = (int*)malloc(sizeof(int) * n);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int j = 0;
        for (; j < cnt; ++j) if (u[j] == a[i]) break;
        if (j == cnt) u[cnt++] = a[i];
    }

    u = (int*)realloc(u, sizeof(int) * cnt);

    for (int i = 0; i < cnt; ++i) {
        if (i) printf(" ");
        printf("%d", u[i]);
    }
    printf("\n");

    free(a);
    free(u);
    return 0;
}
