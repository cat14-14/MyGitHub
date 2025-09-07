#include <stdio.h>
int main(void)
{
    int a[10], b[10];
    int front = 0;     // 홀수는 앞에서부터
    int back = 9;      // 짝수는 뒤에서부터

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 1)
        {
            b[front++] = a[i];
        }
        else
        {
            b[back--] = a[i];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
}