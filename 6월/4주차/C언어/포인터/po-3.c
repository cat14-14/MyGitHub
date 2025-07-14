#include <stdio.h>
int main(void)
{
    char arr[3][3] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    int i = 1, j = 1;
    printf("%p\n", arr+i);
    printf("%p\n", arr[i]+j);
    printf("%c\n", *(arr[i++]+j));
    printf("%p\n", *(arr+i)+j);
    printf("%c", *(*(arr + i) + j));
}