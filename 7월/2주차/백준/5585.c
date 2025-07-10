#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    int change = 1000 - a;
    int count = 0;

    while(change >= 500) { change -= 500; count++; }
    while(change >= 100) { change -= 100; count++; }
    while(change >= 50)  { change -= 50;  count++; }
    while(change >= 10)  { change -= 10;  count++; }
    while(change >= 5)   { change -= 5;   count++; }
    while(change >= 1)   { change -= 1;   count++; }

    printf("%d", count);
}
