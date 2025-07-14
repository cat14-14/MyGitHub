#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000001];
    fgets(str, sizeof(str), stdin);

    int count = 0;
    int len = strlen(str);

    // 개행 제거
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("%d\n", count);
}
