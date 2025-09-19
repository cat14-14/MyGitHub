#include <stdio.h>
typedef struct{
    int id;
    int kor;
    int eng;
    int mat;
    int soc;
    int sci;
    int inf;
    int mus;
} student;
int main(void){
    int a;
    scanf("%d", &a);
    student b[a];
    for(int i=0; i<a; i++){
        scanf("%d %d %d %d %d %d %d %d", &b[i].id, &b[i].kor, &b[i].eng, &b[i].mat, &b[i].soc, &b[i].sci, &b[i].inf, &b[i].mus);
    }
    for(int i=0; i<a; i++){
        int max = i;
        for(int j=i+1; j<a; j++){
            if(b[max].inf < b[j].inf)
			{
				max = j;
			}
        }
        student temp = b[i];
        b[i] = b[max];
        b[max] = temp;
    }
    for(int i=0; i<a; i++){
        printf("%d : %d %d %d %d %d %d %d %d\n", i+1, b[i].id, b[i].kor, b[i].eng, b[i].mat, b[i].soc, b[i].sci, b[i].inf, b[i].mus);
    }
}