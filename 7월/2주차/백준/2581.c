#include <stdio.h>
#include <stdbool.h>

// 소수 판별 함수
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    int sum = 0;
    int min = -1;
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            if (min == -1) {
                min = i; // 첫 번째 소수 발견 시 저장
            }
        }
    }
    if (min == -1) {
        printf("-1\n");
    } else {
        printf("%d\n%d\n", sum, min);
    }

    return 0;
}
