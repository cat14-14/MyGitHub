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
    struct person arr[3] ={
        {"a", "010-1111-2222", 30},
        {"b", "010-2222-3333", 25},
        {"c", "010-3333-4444", 20}
    };
    for(int i=0; i<3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].phone, arr[i].age);
}
