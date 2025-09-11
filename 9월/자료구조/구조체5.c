#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[30];
    double score;
} student;
int main(void) {
    int n;
    scanf("%d", &n);
    student *arr = (student*)malloc(sizeof(student) * n);
    if (!arr) return 0;
    double sum = 0.0;
     for (int i = 0; i < n; i++) {
        scanf("%s %lf", arr[i].name, &arr[i].score);
        sum += arr[i].score;
    }
    printf("%.2f\n", sum / n);
    free(arr);
}
