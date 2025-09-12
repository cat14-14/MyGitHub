#include <stdio.h>
int main()
{
    int num1=10, num2 = 20;
    int *p1=&num1, *p2=&num2;
    *p1+=10, *p2-=10;
    p1 = &num2;
    p2 = &num1;
    printf("%d %d\n", num1, num2);
    return 0;
}