#include <stdio.h>

int main() {
    int N, M, K;
    scanf("%d %d", &N, &M);
    int A[100][100], B[100][100], C[100][100] = {0};
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);
    scanf("%d %d", &M, &K);
    for (int i = 0; i < M; i++)
        for (int j = 0; j < K; j++)
            scanf("%d", &B[i][j]);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < K; j++)
            for (int t = 0; t < M; t++)
                C[i][j] += A[i][t] * B[t][j];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (j) printf(" ");
            printf("%d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
