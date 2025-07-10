#include <stdio.h>
int main(void)
{
    char s[51];
    scanf("%s",s);
    for(int i=0; s[i]!='\0'; i++)
    {
        printf("\'%c\'\n", s[i]);
    }
}