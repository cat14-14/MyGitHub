#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int min_sum = 1e9;
    int best_row = 0, best_col = 0;

    for (int row = 1; row <= N; row++) {
        int col = (N + row - 1) / row;
        int sum = row + col;
        if (row * col >= N && sum < min_sum) {
            min_sum = sum;
            best_row = row;
            best_col = col;
        }
    }

    printf("%d %d\n", best_row, best_col);
    return 0;
}
