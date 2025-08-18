#include <stdio.h>
#include <string.h>

int main() {
    char A[501], B[501];
    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);
    int minDiff = 501;

    for (int i = 0; i <= lenB - lenA; i++) {
        int diff = 0;
        for (int j = 0; j < lenA; j++) {
            if (A[j] != B[i + j]) {
                diff++;
            }
        }
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    printf("%d\n", minDiff);
    return 0;
}
