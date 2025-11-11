#include <stdio.h>
#define MAX 100

int maze[MAX][MAX];
int visited[MAX][MAX];
int n, m;
int min_steps = MAX * MAX;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
void dfs(int y, int x, int steps) {
    if (y == n - 1 && x == m - 1) {
        if (steps < min_steps)
            min_steps = steps;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
            if (maze[ny][nx] == 1 && visited[ny][nx] == 0) {
                visited[ny][nx] = 1;
                dfs(ny, nx, steps + 1);
                visited[ny][nx] = 0;
            }
        }
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &maze[i][j]);
    if (maze[0][0] == 1) {
        visited[0][0] = 1;
        dfs(0, 0, 1);
    }
    if (min_steps < MAX * MAX)
        printf("%d\n", min_steps);
}