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
    struct person arr[3];
    for(int i=0; i<3; i++)
    {
        printf("input name, phone, age: ");
        scanf("%s %s %d", arr[i].name, arr[i].phone, &arr[i].age); 
    }
    for(int i=0; i<3; i++)
        printf("%s %s %d\n", arr[i].name, arr[i].phone, arr[i].age);
}
