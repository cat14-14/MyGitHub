#include <stdio.h>
int Swap3(int* a, int* b, int* c)
{
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
    printf("%d %d %d", *a, *b, *c);
    return 0;
}
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    Swap3(&a, &b, &c);
}