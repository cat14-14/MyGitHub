#include <stdio.h>
int main(void)
{
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    float bmi = a / (b * b);
    if(bmi < 18.5)
        printf("저체중");
    else if(bmi < 23)
        printf("정상");
    else if(bmi < 25)
        printf("정상");
    else if(bmi < 30)
        printf("정상");
    else
        printf("고도비만");
    
}