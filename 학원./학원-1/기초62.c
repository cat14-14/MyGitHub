#include <stdio.h>
int main(void)
{
    char a;
    scanf("%c", &a);
    switch(a)
    {
        case 'a':
        case 'A':
            printf("apple");
            break;
        case 'B':
        case 'b':
            printf("banana");
            break;
        case 'c':
        case 'C':
            printf("cat");
            break;
        default:
            printf("똑바로 입력하세요");
    }
}