#include <stdio.h>
int main(void){
    char name[20] = "Jihye";
    printf("%c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);
    name[0] = 'o';
    printf("%s\n", name);
    // name = "hello";
    printf("%s\n", name);
}