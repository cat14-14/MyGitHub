#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    for(int i = 0; i<n; i++)
    {
        if(s[i]>=65 && s[i]<91)
        {
            printf("%c", s[i] + 32);
        }
        else{
            printf("%c", s[i] - 32);
        }
    }
}

