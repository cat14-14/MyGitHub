#include <stdio.h>
int main(void)
{
    char a;
    scanf("%c", &a);
    switch(a)
    {
        case 'a':
            printf("apple");
            break;
        case 'b':
            printf("banana");
            break;
        case 'c':
            printf("cat");
            break;
        default:
            printf("똑바로 입력하세요");
    }
}