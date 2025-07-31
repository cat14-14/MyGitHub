#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[1000000], B[1000000];

    for (int i = 0; i < N; i++) scanf("%d", &A[i]);
    for (int i = 0; i < M; i++) scanf("%d", &B[i]);

    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] <= B[j]) printf("%d ", A[i++]);
        else printf("%d ", B[j++]);
    }

    while (i < N) printf("%d ", A[i++]);
    while (j < M) printf("%d ", B[j++]);

    return 0;
}
