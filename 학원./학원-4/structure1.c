#include <stdio.h>
#include <math.h>
struct point
{
        int xpos;
        int ypos;
};
struct person
{
        char name[20];
        char phone[15];
        int age;
};
int main()
{
    struct point pos1, pos2;
    fputcs("point1 pos: ", stdout);
    printf("%d", &pos1.xpos);
}