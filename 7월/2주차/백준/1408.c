#include <stdio.h>

int main(void)
{
    int h1, m1, s1;
    int h2, m2, s2;

    // 시간 입력 받기
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // 모두 초 단위로 변환
    int current = h1 * 3600 + m1 * 60 + s1;
    int start = h2 * 3600 + m2 * 60 + s2;

    // 시간 차이 계산
    int diff = start - current;
    if (diff <= 0) diff += 24 * 3600; // 다음날로 넘김

    // 다시 시:분:초로 변환
    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    // 출력 형식: 두 자리로 맞춤
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
