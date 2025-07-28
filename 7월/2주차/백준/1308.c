#include <stdio.h>

int main() {
    int y1, m1, d1, y2, m2, d2;
    int md[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);

    if (y2 - y1 > 1000 || (y2 - y1 == 1000 && (m2 > m1 || (m2 == m1 && d2 >= d1)))) {
        printf("gg\n");
        return 0;
    }

    int days1 = 0, days2 = 0;

    for (int i = 1; i < y1; i++) days1 += ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) ? 366 : 365;
    for (int i = 1; i < y2; i++) days2 += ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) ? 366 : 365;

    for (int i = 0; i < m1 - 1; i++) days1 += md[i];
    for (int i = 0; i < m2 - 1; i++) days2 += md[i];

    if (m1 > 2 && ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)) days1++;
    if (m2 > 2 && ((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0)) days2++;

    days1 += d1;
    days2 += d2;

    printf("D-%d\n", days2 - days1);
    return 0;
}
