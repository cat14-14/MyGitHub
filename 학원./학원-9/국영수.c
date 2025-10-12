#include <stdio.h>

typedef struct{
    char name[30];
    int korean;
    int english;
    int math;
} student;

void sort_korean(student a[], int n);
void sort_english(student a[], int n);
void sort_math(student a[], int n);

void sort(student a[], int n){
    sort_korean(a, n);
    sort_english(a, n);
    sort_math(a, n);
}

void sort_korean(student a[], int n){
    for(int i=0; i<n-1; i++){
        int max = i;
        for(int j=i+1; j<n; j++){
            if(a[j].korean > a[max].korean){
                max = j;
            }
        }
        if(max != i){
            student temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
    }
}

void sort_english(student a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].korean == a[j].korean && a[i].english > a[j].english){
                student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sort_math(student a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].korean == a[j].korean && a[i].english == a[j].english && a[i].math < a[j].math){
                student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
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
