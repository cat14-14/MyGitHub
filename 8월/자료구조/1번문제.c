#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int *a;
    a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    printf("%lld\n", sum);
    free(a);
    return 0;
}
