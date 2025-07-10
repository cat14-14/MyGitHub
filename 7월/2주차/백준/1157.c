#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[1000];
    scanf("%s", a);
    int i = 0;
    int alpha[26];
    while(a[i++])
    {
        if (a[i] >= 97 && a[i] <= 122) {
            alpha[a[i]-97]++;
        }
        else if(a[i] <= 90 && a[i] >= 65) {
            alpha[a[i]-65]++;
        }
    }
}