#include <stdio.h>
int main(void)
{
    float a,b;
    scanf("%f %f", &a, &b);
    float max = -10000000000;
    float result[] = {
        a+b,
        a-b,
        b-a,
        a*b,
        a/b,
        b/a,
        a*a,
        b*b
    };
     for (int i = 0; i < 8; i++) {
        if (result[i] > max) {
            max = result[i];
        }
    }
    printf("%.6lf\n", max);
}