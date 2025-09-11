#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int date;
} Author;

typedef struct {
    char bname[30];
    int price;
    Author author;
} Book;
int main(void)
{
    Book b[2];
    for(int i=0; i<2; i++)
        scanf("%s %d %s %d", b[i].bname, b[i].price, b[i].author.name, b[i].author.date);
     if (b[0].price >= b[1].price)
        printf("%s %d %s %d\n", b[1].bname, b[1].price, b[1].author.name, b[1].author.date);
    else
        printf("%s %d %s %d\n", b[0].bname, b[0].price, b[0].author.name, b[0].author.date);

    return 0;
}