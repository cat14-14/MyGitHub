#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[30];
    char number[30];
}employee;
int main(void)
{
    int n, m;
    scanf("%d", &n);
    employee *arr = (employee*)malloc(sizeof(employee) * n);
    for(int i=0; i<n; i++)
        scanf("%s %s", arr[i].name, arr[i].number);
    scanf("%d", &m);
    char *a[30];
    for(int i=0; i<m; i++)
    {
        a[i] = (char*)malloc(30);   
        scanf("%29s", a[i]);
    }
    char b[30];
    for(int i=0; i<m; i++)
    {
        int f = 0;
        for(int j=0; j<n; j++)
        {
            if (strcmp(a[i], arr[j].name) == 0)
            {
                f = 1;
                strcpy(b, arr[j].number);
                break;
            }
        }
        if(f==0)
            printf("Not found");
        else
            printf("%s", b);
    }
}