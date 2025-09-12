#include <stdio.h>
int main(void)
{
    int a,b,c,d,e;
    printf("국어점수를 입력하세요 : ");
    scanf("%d", &a);
    printf("영어점수를 입력하세요 : ");
    scanf("%d", &b);
    printf("수학점수를 입력하세요 : ");
    scanf("%d", &c);
    printf("사회점수를 입력하세요 : ");
    scanf("%d", &d);
    printf("과학점수를 입력하세요 : ");
    scanf("%d", &e);
    printf("시험점수의 총점은 %d점입니다.\n", a+b+c+d+e);
    printf("시험점수의 평균은 %d점입니다.", (a+b+c+d+e)/5);
}