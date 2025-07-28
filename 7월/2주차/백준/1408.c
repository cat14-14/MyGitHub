#include <stdio.h>

int main(void)
{
    int h1, m1, s1;
    int h2, m2, s2;


    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);


    int current = h1 * 3600 + m1 * 60 + s1;
    int start = h2 * 3600 + m2 * 60 + s2;

    int diff = start - current;
    if (diff <= 0) diff += 24 * 3600; 

    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

 
    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}
