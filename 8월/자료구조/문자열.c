#include <stdio.h>
int main(void)
{
    char str[101];
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] != ' ')
            printf("%c", str[i]);
    }
}