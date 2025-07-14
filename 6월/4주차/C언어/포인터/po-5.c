#include <stdio.h>
int main(void){
    char *p[3] = {"software", "center", "highschool"};
    char **ptr = p;
    printf("%s\n", *(ptr+1));
    printf("%c\n", **(ptr+2));
    printf("%c\n", *(*(ptr+1)+2));
}