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
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    int max = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > max) max = a[i];
    }
    int left = 0;
    int right = max;
    int result = 0;
    while(left <= right) {
        int mid = (left + right) / 2;
        int t = gsum(a, n, mid);
        if(t < m) {
            right = mid - 1;
        } else {
            result = mid;
            left = mid + 1;
        }
    }
    printf("%d\n", result);
    return 0;
}