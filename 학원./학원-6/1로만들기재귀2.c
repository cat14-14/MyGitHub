#include <stdio.h>

int r(int x, int count) {
    if (x == 1) return count;
    if(x%5==0) 
    {
        r(x/5, count+1);
        printf("%d\n", count);
    }
    else if(x%3==0) r(x/3, count+1);
    else if(x%2==0) r(x/2, count+1);
    else r(x-1, count+1);
}
int main(void) {
    int x;
    scanf("%d", &x);
    int result = r(x, 0);
    printf("%d", result);
    return 0;
}
