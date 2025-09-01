#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("Gnomes:\n");
    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if ((a < b && b < c) || (a > b && b > c))
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
