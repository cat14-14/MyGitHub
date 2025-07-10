#include <stdio.h>
int main() {
    int n, i;
    int a[1000000] = {};

    scanf("%d", &n); // 개수 입력

    for(i = 0; i < n; i++) // 정확히 n개 입력
        scanf("%d", &a[i]);

    for(i = n - 1; i >= 0; i--) // 역순 출력
        printf("%d ", a[i]);

    return 0;
}