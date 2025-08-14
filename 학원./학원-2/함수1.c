#include <stdio.h>
int max(int x, int y, int z)
{
    int max;
    max = (x > y) ? x : y;
    max = (max > z) ? max : z;
    return max;
}
int min(int x, int y, int z)
{
    int min;
    min = (x > y) ? y : x;
    min = (min > z) ? z : min;
    return min;
}
int main(void)
{
    int a, b, c, result, result2;
    scanf("%d %d %d", &a, &b, &c);
    result = max(a, b, c);
    result2 = min(a, b, c);
    printf("MaxThree : %d\n", result);
    printf("MinThree : %d", result2);
}