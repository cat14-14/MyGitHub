#include <stdio.h>
#include <string.h>

int main(void) {
    char jm[2005];
    char dr[2005];
    
    if (scanf("%2004s %2004s", jm, dr) != 2) return 0;
    if (strlen(jm) >= strlen(dr)) {
        puts("go");
    } else {
        puts("no");
    }
    return 0;
}
