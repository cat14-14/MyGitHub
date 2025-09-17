#include <stdio.h>
typedef struct sexual
{
    int n;
    char name[20];
    char S[10];
    int K;
    int M;
} Student_information;

int main(void)
{
    Student_information s[3];
    for(int i=0; i<3; i++)
         scanf("%d %s %s %d %d", &s[i].n, s[i].name, s[i].S, &s[i].K, &s[i].M);
    int max = s[0].K;
    int mn = 0;
    for(int i=0; i<3; i++)
    {
        if(max < s[i].K)
        {
            max = s[i].M;
            mn = i;
        }
        if(max < s[i].M)
        {
            max = s[i].M;
            mn = i;
        }
        
    }
    printf("name : %s\nscore : %d", s[mn].name, max);
}