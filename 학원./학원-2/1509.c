#include <stdio.h>

int main(void)
{
    int arr[10][10], n[10];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for (int k = 0; k < 10; k++)
    {
        if (n[k] == 0) continue;                
        int r = 0;

        for (int j = 9; j >= 0; j--) {
            if (arr[j][k] > 0) { r = 1; break; }
            else if (arr[j][k] < 0) { r = 2; break; }
        }

        if (r == 0)      printf("%d safe\n",  k + 1);
        else if (r == 1) printf("%d crash\n", k + 1);
        else             printf("%d fall\n",  k + 1);
    }

    return 0;
}
