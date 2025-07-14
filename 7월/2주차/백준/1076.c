#include <stdio.h>
#include <string.h>
int gv(char *c)
{
    if (strcmp(c, "black") == 0) return 0;
    else if (strcmp(c, "brown") == 0) return 1;
    else if (strcmp(c, "red") == 0) return 2;
    else if (strcmp(c, "orange") == 0) return 3;
    else if (strcmp(c, "yellow") == 0) return 4;
    else if (strcmp(c, "green") == 0) return 5;
    else if (strcmp(c, "blue") == 0) return 6;
    else if (strcmp(c, "violet") == 0) return 7;
    else if (strcmp(c, "grey") == 0) return 8;
    else if (strcmp(c, "white") == 0) return 9;
    return -1; // 예외 처리
}
int gvv(char *c)
{
    if (strcmp(c, "black") == 0) return 1;
    else if (strcmp(c, "brown") == 0) return 10;
    else if (strcmp(c, "red") == 0) return 100;
    else if (strcmp(c, "orange") == 0) return 1000;
    else if (strcmp(c, "yellow") == 0) return 10000;
    else if (strcmp(c, "green") == 0) return 100000;
    else if (strcmp(c, "blue") == 0) return 1000000;
    else if (strcmp(c, "violet") == 0) return 10000000;
    else if (strcmp(c, "grey") == 0) return 100000000;
    else if (strcmp(c, "white") == 0) return 1000000000;
    return -1;
}
int main(void)
{
    char a[10],b[10],c[10];
    scanf("%s %s %s", a, b, c);
    int A,B,C;
    A = gv(a);
    B = gv(b);
    C = gvv(c);
    A *=10;
    printf("%d",(A+B)*C);
}