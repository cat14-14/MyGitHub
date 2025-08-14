#include <stdio.h>
int main(void)
{
    int a[10];
    for(int i=0; i<10; i++)
        scanf("%d", &a[i]);
    int min = 0, max = 0;
    for(int j=1; j<10; j++)
    {
        if(a[min] > a[j])
            min = j;
    }
    for(int j=1; j<10; j++)
    {
        if(a[min] < a[j])
            max = j;
    }
    int sum = 0;
    for(int j=0; j<10; j++)
    {
        if(j != min || j != max)
            sum += a[j];
    }
    printf("가장 큰수와 가장 작은 제외한 나머지 숫자의 평균  %d", sum/8);
}