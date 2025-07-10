#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    if (b + c < 60)
    {
        // 분 더했을 때 60 미만이면 그대로 출력
        printf("%d %d", a, b + c);
    }
    else
    {
        // 분을 더한 후 시간 올림
        int hour = a + (b + c) / 60;
        int min = (b + c) % 60;

        // 시간 조정: 24시를 넘으면 0시부터 시작
        if (hour >= 24)
        {
            hour %= 24;
        }

        printf("%d %d", hour, min);
    }
}
