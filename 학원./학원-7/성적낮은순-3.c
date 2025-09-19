#include <stdio.h>
typedef struct{
    char name[30];
    int score;
}student;
int main(void){
    int a;
    scanf("%d", &a);
    student b[a];
    for(int i=0; i<a; i++)
    {
        scanf("%s %d", b[i].name, &b[i].score);
    }
    for(int i=1; i<a; i++){
        for(int j=0; j<i; j++){
            if(b[i].score < b[j].score){
                student temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        printf("%s ", b[i].name);
    }
}