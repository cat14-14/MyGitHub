#include <stdio.h>

int main(void)
{
    char a[1000001];
    int b[26] = {0}; // 초기화
    scanf("%s", a);

    int i = 0;
    while (a[i]) {
        if (a[i] >= 'A' && a[i] <= 'Z')
            b[a[i] - 'A']++;
        else if (a[i] >= 'a' && a[i] <= 'z')
            b[a[i] - 'a']++;
        i++;
    }

    int max = 0;
    int isSame = 0;

    for (int j = 1; j < 26; j++) {
        if (b[j] > b[max]) {
            max = j;
            isSame = 0;
        } else if (b[j] == b[max] && j != max) {
            isSame = 1; // 중복 발생
        }
    }

    if (isSame)
        printf("?\n");
    else
        printf("%c\n", max + 'A');
}
