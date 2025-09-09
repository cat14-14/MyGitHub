#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n; 
    scanf("%d", &n);
    char *s[10];
    char buf[1001];
    int idx = -1, best = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%1000s", buf);
        int len = 0; while (buf[len]) ++len;
        s[i] = (char*)malloc(len + 1);
        for (int k = 0; k <= len; ++k) s[i][k] = buf[k];
        if (len > best) { best = len; idx = i; }
    }
    if (idx >= 0) printf("%s\n", s[idx]);
    for (int i = 0; i < n; ++i) free(s[i]);
    return 0;
}
