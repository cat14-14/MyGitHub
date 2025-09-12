#include <stdio.h>
int main(void)
{
    int a[10];
    for(int i=0; i<10; i++)
        scanf("%d", &a[i]);
    int min = 0;
    for(int j=1; j<10; j++)
    {
        if(a[min] < a[j])
            min = j;
    }
    printf("가장 큰 수는 %d", a[min]);
}