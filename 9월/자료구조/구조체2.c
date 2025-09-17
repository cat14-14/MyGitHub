#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30]; //char형 배열
    int date; //int형 변수
} Author; //구조체 Author 선언

typedef struct {
    char bname[30]; //char형 배열
    int price; //int형 변수
    Author author; //구조체 Author형 변수
} Book; //구조체 Book 선언
int main(void)
{
    Book b[2]; //구조체 Book형 배열 b 선언
    for(int i=0; i<2; i++) 
        scanf("%s %d %s %d", b[i].bname, b[i].price, b[i].author.name, b[i].author.date); //구조체 Book형 배열 b에 값 입력
     if (b[0].price >= b[1].price) //b[0]의 price가 b[1]의 price보다 크거나 같으면
        printf("%s %d %s %d\n", b[1].bname, b[1].price, b[1].author.name, b[1].author.date); //b[1]의 값 출력
    else //b[0]의 price가 b[1]의 price보다 작으면
        printf("%s %d %s %d\n", b[0].bname, b[0].price, b[0].author.name, b[0].author.date); //b[0]의 값 출력

    return 0;
}