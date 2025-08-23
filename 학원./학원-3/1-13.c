#include <stdio.h>
int main(void)
{
    int a=0, sum = 0;
    do{
        if(a%2==0)
            sum += a;
    }while(a++ <= 100);
    printf("%d\n", sum);
}