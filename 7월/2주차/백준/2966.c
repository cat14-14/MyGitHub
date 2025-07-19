#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char answer[101];
    scanf("%d", &n);
    scanf("%s", answer);

    char sang[3] = {'A', 'B', 'C'};
    char chang[4] = {'B', 'A', 'B', 'C'};
    char hyun[6] = {'C', 'C', 'A', 'A', 'B', 'B'};

    int score_s = 0, score_c = 0, score_h = 0;

    for (int i = 0; i < n; i++) {
        if (answer[i] == sang[i % 3]) score_s++;
        if (answer[i] == chang[i % 4]) score_c++;
        if (answer[i] == hyun[i % 6]) score_h++;
    }

    int max = score_s;
    if (score_c > max) max = score_c;
    if (score_h > max) max = score_h;

    printf("%d\n", max);
    if (score_s == max) printf("Adrian\n");
    if (score_c == max) printf("Bruno\n");
    if (score_h == max) printf("Goran\n");

    return 0;
}
