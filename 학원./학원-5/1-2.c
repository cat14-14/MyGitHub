#include <stdio.h>
int main(void)
{
    int a[11];
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("홀수출력: ");
    for(int i=0; i<10; i++)
    {
        if(a[i]%2==1)
            printf("%d", a[i]);
        if(i!=9)
            printf(", ");
    }
    printf("\n짝수출력: ");
    for(int i=0; i<10; i++)
    {
        if(a[i]%2==0)
            printf("%d", a[i]);
        if(i!=9)
            printf(", ");
    }
}