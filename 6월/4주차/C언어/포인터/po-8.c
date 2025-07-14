#include <stdio.h>
int f(char *str){
    int count = 0;
    int i = 0;
    while(*(str +i) != '\0')
    {
        if(*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            if(*(str + i) % 2 == 0)
            {
                count++;
            }
        }
        i++;
    }
    return count;
}
int main(void){
    char input[31];
    scanf("%30s", input);
    int result = f(input);
    printf("%d\n", result);
    return 0;
}