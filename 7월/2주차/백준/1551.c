#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, k;
    int a[21], b[21];

    // 첫 줄 입력
    scanf("%d %d", &n, &k);
    getchar(); // 줄바꿈 문자 제거

    // 수열 입력받기: scanf("%d,", ...) 형식으로 , 무시
    for (int i = 0; i < n; i++) {
        if (i < n - 1)
            scanf("%d,", &a[i]);
        else
            scanf("%d", &a[i]); // 마지막 숫자는 , 없음
    }

    // k번 반복해서 수열 변화
    for (int t = 0; t < k; t++) {
        for (int i = 0; i < n - 1 - t; i++) {
            b[i] = a[i + 1] - a[i];
        }
        for (int i = 0; i < n - 1 - t; i++) {
            a[i] = b[i];
        }
    }

    // 출력 (쉼표 처리)
    for (int i = 0; i < n - k; i++) {
        printf("%d", a[i]);
        if (i < n - k - 1) printf(",");
    }

    return 0;
}
