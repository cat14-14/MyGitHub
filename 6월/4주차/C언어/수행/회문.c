#include <stdio.h>
#include <string.h>
int main(void){
    char s[100];
    int n, is=1;
    scanf("%s", s);
    n = strlen(s);
    for(int i=0; i<=n/2; i++){
        if(s[i] != s[n-1-i]){
            is = 0;
        }
    }
    if(is){
        printf("회문입니다.");
    }
    else{
        printf("회문이 아닙니다.");
    }
}