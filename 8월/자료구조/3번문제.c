#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m; 
    scanf("%d", &m);
    if(m <= 15)
    {
    int *ev = (int*)malloc(sizeof(int) * m);
    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        int x; scanf("%d", &x);
        if (x % 2 == 0) ev[cnt++] = x;
    }
    ev = (int*)realloc(ev, sizeof(int) * cnt);
    for (int i = 0; i < cnt; ++i) {
        if (i) printf(" ");
        printf("%d", ev[i]);
    }
    printf("\n");
    free(ev);
    }
    else
        printf("다시 입력하세요");
    return 0;
}
