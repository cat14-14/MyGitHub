#include <stdio.h>
int ch(char a)
{
    int b = a;
    if(b >= 65 && b <= 96)
        b+=32;
    else
        b-=32;
    return b;
}
int main(void)
{
    char a, result;
    scanf("%c", &a);
    result = ch(a);
    printf("%c", result);
}