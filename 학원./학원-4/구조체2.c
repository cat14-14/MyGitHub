#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    char phone[15];
    int age;
};
int main()
{
    struct person p1, p2 = {"KIM", "010-1111-2222", 30};
    strcpy(p1.phone, "010-1234-5678");
    p1.age = 20;
    scanf("%s", p1.name);
    printf("%s\n", p1.name);
    printf("%s\n", p1.phone);
    printf("%d\n", p1.age);
}
