#include <stdio.h>

int gsum(int *a, int n, int h) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > h) {
            sum += a[i] - h;
        }
    }
    return sum;
}
int sort(int *a, int n, int m, int left, int right, int result) {
    if(left > right) return result;
    int mid = (left + right) / 2;
    int t = gsum(a, n, mid);
    if(t < m) {
        return sort(a, n, m, left, mid - 1, result);
    } else {
        return sort(a, n, m, mid + 1, right, mid);
    }
}
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    int max = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > max) max = a[i];
    }
    int result = sort(a, n, m, 0, max, 0);
    printf("%d\n", result);
    return 0;
}
