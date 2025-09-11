#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int year;
    int month;
    int d;
}   Date;
typedef struct 
{
    char name[30];
    int id;
    Date date;
}   Employee;
int main(void)
{
    Employee po[3];
    for(int i=0; i<3; i++)
    {
        scanf("%s %d %d %d %d", po[i].name, po[i].id, po[i].date.year,po[i].date.month, po[i].date.d);
    }
    int m = 0;
    for (int i = 1; i < 3; i++) {
        Date a = po[i].date;
        Date b = po[m].date;
        if (a.year < b.year ||
            (a.year == b.year && a.month < b.month) ||
            (a.year == b.year && a.month == b.month && a.d < b.d)) {
            m = i;
        }
    }
    printf("%s %d %d %d %d", po[m].name, po[m].id, po[m].date.year,po[m].date.month, po[m].date.d);
}
