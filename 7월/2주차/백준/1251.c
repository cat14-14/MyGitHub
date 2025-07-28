#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    char result[55];
    char temp[55];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < 54; i++) result[i] = 'z';
    result[54] = '\0';
    for (int i = 1; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            int t = 0;
            for (int k = i - 1; k >= 0; k--)
                temp[t++] = s[k];
            for (int k = j - 1; k >= i; k--)
                temp[t++] = s[k];
            for (int k = len - 1; k >= j; k--)
                temp[t++] = s[k];
            temp[t] = '\0';

            if (strcmp(temp, result) < 0)
                strcpy(result, temp);
        }
    }

    printf("%s\n", result);
    return 0;
}
