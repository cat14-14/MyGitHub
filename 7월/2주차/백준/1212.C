#include <stdio.h>
#include <string.h>

int main() {
    char oct[333335];
    scanf("%s", oct);

    int len = strlen(oct);

    for (int i = 0; i < len; i++) {
        int digit = oct[i] - '0';
        if (i == 0) {
            // 첫 자리는 앞의 0 제거 (예: 3 → 11)
            if (digit == 0) printf("0");
            else if (digit == 1) printf("1");
            else if (digit == 2) printf("10");
            else if (digit == 3) printf("11");
            else if (digit == 4) printf("100");
            else if (digit == 5) printf("101");
            else if (digit == 6) printf("110");
            else if (digit == 7) printf("111");
        } else {
            // 나머지 자리는 반드시 3자리로 출력
            printf("%03d", 
                (digit & 4 ? 1 : 0) * 100 + 
                (digit & 2 ? 1 : 0) * 10 + 
                (digit & 1 ? 1 : 0));
        }
    }

    return 0;
}
