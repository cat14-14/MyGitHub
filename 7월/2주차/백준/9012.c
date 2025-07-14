#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    char s[51]; // 문자열 길이는 최대 50

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", s);
        int balance = 0;
        int valid = 1;

        for (int j = 0; s[j] != '\0'; j++) {
            if (s[j] == '(') {
                balance++;
            } else if (s[j] == ')') {
                balance--;
                if (balance < 0) { // 닫는 괄호가 더 많으면 VPS 아님
                    valid = 0;
                    break;
                }
            }
        }

        if (balance != 0) valid = 0;

        if (valid) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
