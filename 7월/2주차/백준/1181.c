#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 20000

char s[MAX][51];
int compare(const void* a, const void* b) {
    const char* str1 = (const char*)a;
    const char* str2 = (const char*)b;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) return len1 - len2;
    return strcmp(str1, str2);
}

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", s[i]);

    qsort(s, n, sizeof(s[0]), compare);

    printf("%s\n", s[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(s[i], s[i - 1]) != 0)
            printf("%s\n", s[i]);
    }

    return 0;
}
