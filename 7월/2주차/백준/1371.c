#include <stdio.h>
#include <string.h>

int main(void) {
    char line[100];
    int count[26] = {0};
    while (fgets(line, sizeof(line), stdin)) {
        for (int i = 0; line[i]; i++) {
            if ('a' <= line[i] && line[i] <= 'z') {
                count[line[i] - 'a']++;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > max)
            max = count[i];
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] == max)
            printf("%c", i + 'a');
    }

    return 0;
}
