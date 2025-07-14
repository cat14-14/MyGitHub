#include <stdio.h>

int main()
{
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    int highest_place = 1;

    if (num < 0)
    {
        num = -num;
    }
    if (num == 0)
    {
        printf("0입니다.\n");
        return 0;
    }

    while (num >= 10)
    {
        num = num / 10;
        highest_place += 1;
    }

    printf("%d의 자리\n", highest_place);
    return 0;
}
