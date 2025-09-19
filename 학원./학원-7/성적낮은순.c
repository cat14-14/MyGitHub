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
    for(int i=0; i<a; i++)
    {
        int min = i;
        for(int j=i+1; j<a; j++)
        {
            if(b[min].score > b[j].score)
            {
                min = j;
            }
        }
        printf("%s ", b[min].name);
    }
}