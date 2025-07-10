#include <stdio.h>
int main()
{
    char a[30];
    fgets(a, 31, stdin);
    printf("%s",a);
}