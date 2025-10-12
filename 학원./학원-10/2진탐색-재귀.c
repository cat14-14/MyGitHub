#include <stdio.h>
int twosort(int *b, int n, int left, int right){
    int mid = (left + right) / 2;
    if(b[mid] == n){
        printf("인덱스 위치 : %d", mid);
        return 0;
    }
    else if(b[mid] < n){
        twosort(b, n, (mid+1), right);
    }
    else{
        twosort(b, n, left, (mid-1));
    }
}
int main(void) {
    int b[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int n;
    printf("찾고 있는 숫자를 입력하세요(0, 2, 4, 6, 8, 10, 12, 14, 16, 18) : ");
    scanf("%d", &n);
    int left = 0;
    int right = 9;
    twosort(b, n, left, right);
}