#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char line[101];
    for (int i = 1; i <= n; i++) {
        fgets(line, sizeof(line), stdin);
        printf("%d. %s", i, line);
    }
    return 0;
}
