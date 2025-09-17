#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int year; //int형 변수 //멤버 변수
    int month;  //int형 변수 //멤버 변수
    int d;  //int형 변수 //멤버 변수
} Date; //구조체 Date 선언

typedef struct { 
    char name[30]; //char형 배열
    int id; //int형 변수
    Date date; //구조체 Date형 변수
} Employee; //구조체 Employee 선언

int main(void) {
    Employee po[3]; //구조체 Employee형 배열 po 선언
    for (int i = 0; i < 3; i++) {
        scanf("%s %d %d %d %d",  
              po[i].name, 
              &po[i].id, 
              &po[i].date.year, 
              &po[i].date.month, 
              &po[i].date.d);
    }

    int m = 0; //최소값의 인덱스
    for (int i = 1; i < 3; i++) {
        Date a = po[i].date; //구조체 Date형 변수 a 선언 및 초기화
        Date b = po[m].date; //구조체 Date형 변수 b 선언 및 초기화
        if (a.year < b.year ||
            (a.year == b.year && a.month < b.month) ||
            (a.year == b.year && a.month == b.month && a.d < b.d)) {
            m = i;
        } 
    }

    printf("%s %d %d %d %d\n", 
           po[m].name, 
           po[m].id, 
           po[m].date.year, 
           po[m].date.month, 
           po[m].date.d);

    return 0;
}
