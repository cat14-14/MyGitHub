#include <stdio.h>

int main(void) {
    int b[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int n;
    printf("찾고 있는 숫자를 입력하세요(0, 2, 4, 6, 8, 10, 12, 14, 16, 18) : ");
    scanf("%d", &n);

    int left = 0;
    int right = 9;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (b[mid] == n) {
            printf("인덱스 위치 : %d\n", mid);
            break;
        } else if (b[mid] < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}