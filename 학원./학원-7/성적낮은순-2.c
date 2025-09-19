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
    for(int i=0; i<a-1; i++)
    {
        for(int j=i+1; j<a-1; j++)
        {
            if(b[j].score > b[j+1].score)
			{
				student temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
			}
        }
        
    }
    for(int i=0; i<a; i++)
    {
        printf("%s ", b[i].name);
    }
}