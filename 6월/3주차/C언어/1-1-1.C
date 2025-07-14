#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    char s[N][51];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", s[i]);
    }
    int n = strlen(s[0]);
    for(int i = 0; i < n; i++)
    {
        char cr = s[0][i];
        int same = 1;
        for(int j = 1; j < N; j++)
        {
            if (s[j][i] != cr)
            {
                same = 0;
                break;
            }
        }
        if (same)
            printf("%c", cr);
        else
            printf("?");
    }
}