#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[7];         
    int result = 0;    
    scanf("%s", a);
    
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        int digit;

        if (a[i] >= '0' && a[i] <= '9') {
            digit = a[i] - '0';
        }
        else if (a[i] >= 'A' && a[i] <= 'F') {
            digit = a[i] - 'A' + 10;
        }

        result = result * 16  + digit;
    }

    printf("%d\n", result);
    return 0;
}
