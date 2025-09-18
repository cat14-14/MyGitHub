#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
    char a[10000], b[10000];
    scanf("%s %s", a, b);

    char minA[10000], minB[10000];
    char maxA[10000], maxB[10000];
    strcpy(minA, a);
    strcpy(minB, b);
    strcpy(maxA, a);
    strcpy(maxB, b);
    for (int i = 0; i < strlen(minA); i++) {
        if (minA[i] == '6') minA[i] = '5';
    }
    for (int i = 0; i < strlen(minB); i++) {
        if (minB[i] == '6') minB[i] = '5';
    }
    for (int i = 0; i < strlen(maxA); i++) {
        if (maxA[i] == '5') maxA[i] = '6';
    }
    for (int i = 0; i < strlen(maxB); i++) {
        if (maxB[i] == '5') maxB[i] = '6';
    }
    int minSum = atoi(minA) + atoi(minB);
    int maxSum = atoi(maxA) + atoi(maxB);
    printf("%d %d\n", minSum, maxSum);
    return 0;
}
