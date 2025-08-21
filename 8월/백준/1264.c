#include <stdio.h>

int main(void) {
    int c, cnt = 0;
    while ((c = getchar()) != EOF) {
        if (c == '#') break;
        if (c == '\n') {
            printf("%d\n", cnt);
            cnt = 0;
            continue;
        }
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            cnt++;
    }
    return 0;
}
