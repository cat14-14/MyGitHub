#include <stdio.h>
#define MAX 100

int maze[MAX][MAX];
int visited[MAX][MAX];
int queue[MAX * MAX][2];
int front = 0, rear = 0;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &maze[i][j]);
    queue[rear][0] = 0;
    queue[rear][1] = 0;
    rear++;
    visited[0][0] = 1;
    while (front < rear) {
        int y = queue[front][0];
        int x = queue[front][1];
        front++;
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
                if (maze[ny][nx] == 1 && visited[ny][nx] == 0) {
                    visited[ny][nx] = visited[y][x] + 1;
                    queue[rear][0] = ny;
                    queue[rear][1] = nx;
                    rear++;
                }
            }
        }
    }
    if (visited[n-1][m-1])
        printf("%d\n", visited[n-1][m-1]);
}