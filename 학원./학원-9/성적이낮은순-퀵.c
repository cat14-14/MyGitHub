#include <stdio.h>
typedef struct{
    char name[30];
    int score;
}student;

int quick(student b[], int left, int right){
    int pivot = left;
    int leftp;
    int lefti = left+1;
    int rightp;
    int righti = right;
    for(int i=left; i<=right; i++){
        for(int j=lefti; j<=right; j++){
            if(b[pivot].score < b[j].score){
                leftp = j;
                break;
            }
        }
        for(int k=righti; k>=left; k--){
            if(b[pivot].score > b[k].score){
                rightp = k;
                break;
            }
        }   
        if(leftp > rightp){
            student temp = b[pivot];
            b[pivot] = b[rightp];
            b[rightp] = temp;
            pivot = rightp;
            break;
        }
        student temp = b[leftp];
        b[leftp] = b[rightp];
        b[rightp] = temp;
        lefti = leftp+1;
        righti = rightp-1;
        
    }
    if(left < pivot-1)
        quick(b, left, pivot-1);
    if(pivot+1 < right)
        quick(b, pivot+1, right);
    return 0;
}
int main(void){
    int a;
    scanf("%d", &a);
    student b[a];
    for(int i=0; i<a; i++)
    {
        scanf("%s %d", b[i].name, &b[i].score);
    }
    quick(b, 0, a-1);
    for(int i=0; i<a; i++)
    {
        printf("%s ", b[i].name);
    }
}