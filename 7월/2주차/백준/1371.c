#include <stdio.h>
#include <string.h>

int main(void) {
    char line[100];       // 한 줄 입력 버퍼
    int count[26] = {0};  // 알파벳 a~z 카운트 (초기화 중요)

    // 여러 줄 입력 (EOF까지 반복)
    while (fgets(line, sizeof(line), stdin)) {
        for (int i = 0; line[i]; i++) {
            if ('a' <= line[i] && line[i] <= 'z') {
                count[line[i] - 'a']++;
            }
        }
    }

    // 가장 많이 나온 횟수 찾기
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max)
            max = count[i];
    }

    // 최댓값과 같은 문자 모두 출력 (사전 순)
    for (int i = 0; i < 26; i++) {
        if (count[i] == max)
            printf("%c", i + 'a');
    }

    return 0;
}
