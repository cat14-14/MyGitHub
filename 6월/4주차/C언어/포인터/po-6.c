#include <stdio.h>
int main(void){
    char *colors[] = {"red", "green", "blue", "yellow"};
    char **ptr = colors + 2;
    printf("%c\n", *(*ptr + 1));
    printf("%s\n", *(ptr -1));
}