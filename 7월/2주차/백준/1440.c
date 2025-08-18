#include <stdio.h>

int is_valid_time(int h, int m, int s) {
    return (1 <= h && h <= 12) && (0 <= m && m <= 59) && (0 <= s && s <= 59);
}

int main(void) {
    int t1, t2, t3;
    scanf("%2d:%2d:%2d", &t1, &t2, &t3);

    int count = 0;
    if (is_valid_time(t1, t2, t3)) count++;
    if (is_valid_time(t1, t3, t2)) count++;
    if (is_valid_time(t2, t1, t3)) count++;
    if (is_valid_time(t2, t3, t1)) count++;
    if (is_valid_time(t3, t1, t2)) count++;
    if (is_valid_time(t3, t2, t1)) count++;

    printf("%d\n", count);

    return 0;
}
