#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b % a == 0) {
        printf("%d*%d=%d\n", a, b / a, b);
    } else if (a % b == 0) {
        printf("%d*%d=%d\n", b, a / b, a);
    } else {
        printf("none\n");
    }

    return 0;
}
/*
#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(b%a==0)
    {
        for(int i=1; i<=a; i++)
        {
            if (a*i == b)
            {
                printf("%d*%d=%d", a,i,b);
                return 0;
            }
        }
        printf("none");
    }
    if(a%b==0)
    {
        for(int i=1; i<=b; i++)
        {
            if (b*i == a)
            {
                printf("%d*%d=%d", b,i,a);
                return 0;
            }
        }
        printf("none");
    }
    else{
        printf("none");
    }
}
*/