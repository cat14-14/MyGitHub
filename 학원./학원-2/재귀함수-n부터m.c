#include <stdio.h>
int fi(int n, int m){
    int sum = 0;
    if(n > m)
        return sum;
    printf("%d ", n);
    fi(n+1, m);
}
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    fi(n, m);
}