#include <stdio.h>

int is_valid_time(int h, int m, int s) {
    return (1 <= h && h <= 12) && (0 <= m && m <= 59) && (0 <= s && s <= 59);
}

int main(void) {
    int t1, t2, t3;
    scanf("%2d:%2d:%2d", &t1, &t2, &t3);

    int count = 0;

    // 가능한 6가지 시간 조합
    if (is_valid_time(t1, t2, t3)) count++; // h m s
    if (is_valid_time(t1, t3, t2)) count++; // h s m
    if (is_valid_time(t2, t1, t3)) count++; // m h s
    if (is_valid_time(t2, t3, t1)) count++; // m s h
    if (is_valid_time(t3, t1, t2)) count++; // s h m
    if (is_valid_time(t3, t2, t1)) count++; // s m h

    printf("%d\n", count);

    return 0;
}
