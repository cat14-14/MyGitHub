#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int num;
    int kor;
    int mat;
    int eng;
    int sum;
};
int compare(const void *a, const void *b) {
    const struct Student *s1 = (const struct Student *)a;
    const struct Student *s2 = (const struct Student *)b;

    if (s1->sum != s2->sum) {
        return s2->sum - s1->sum;
    }
    return strcmp(s1->name, s2->name);
}

int main()
{
    int n;
    scanf("%d", &n);

    struct Student *Std = malloc(n * sizeof(struct Student));

    for(int i=0; i<n; i++){
        scanf("%s %d %d %d",
              Std[i].name,
              &Std[i].kor,
              &Std[i].mat,
              &Std[i].eng);
        Std[i].sum = Std[i].kor + Std[i].mat + Std[i].eng;
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(Std[i].sum < Std[j].sum)
            {
                struct Student temp = Std[i];
                Std[i] = Std[j];
                Std[j]= temp;
            }
        }
    }
    // qsort(Std, n, sizeof(struct Student), compare);

    for(int i=0; i<n; i++){
        printf("%s %d %d %d\n", Std[i].name, Std[i].kor, Std[i].mat, Std[i].eng);
    }

    free(Std);
    return 0;
}