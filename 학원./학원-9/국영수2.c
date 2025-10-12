#include <stdio.h>

typedef struct{
    char name[30];
    int korean;
    int english;
    int math;
} student;

void sort(student a[], int n){
    for(int i=0; i<n-1; i++){
        int best = i;
        for(int j=i+1; j<n; j++){
            if(
                a[j].korean > a[best].korean ||
                (a[j].korean == a[best].korean && a[j].english < a[best].english) ||
                (a[j].korean == a[best].korean && a[j].english == a[best].english && a[j].math > a[best].math)
            ){
                best = j;
            }
        }
        if(best != i){
            student temp = a[i];
            a[i] = a[best];
            a[best] = temp;
        }
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    student a[n];
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", a[i].name, &a[i].korean, &a[i].english, &a[i].math);
    }
    sort(a, n);
    for(int i=0; i<n; i++){
        printf("%s %d %d %d\n", a[i].name, a[i].korean, a[i].english, a[i].math);
    }
    return 0;
}
