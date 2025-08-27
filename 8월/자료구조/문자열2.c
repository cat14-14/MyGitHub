#include <stdio.h>
int main(void)
{
    char str[101];
    int sum = 0;
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
            sum += (str[i] - '0');
    }
    printf("%d", sum);
}