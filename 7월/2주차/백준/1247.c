#include <stdio.h>

int main(void)
{
    long long int n = 0;
    long long int a[1000000];

    for (int t = 0; t < 3; t++)  // 총 3개의 테스트 케이스
    {
        scanf("%lld", &n);  // 각 테스트 케이스의 숫자 개수
        long long int sum = 0;  // 합 초기화

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);     // 정수 입력
            sum += a[i];            // 합 누적
        }

        if (sum == 0)
            printf("0\n");
        else if (sum > 0)
            printf("+\n");
        else
            printf("-\n");
    }

    return 0;
}
