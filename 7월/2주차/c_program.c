#include <stdio.h>
// #include <conio.h>   // _getch() 사용
#include <stdlib.h>  // system("cls")

#define ROW 8
#define COL 13

char maze[ROW][COL + 1] = {
    "#############",
    "#@..#.......#",
    "##.#.###.##.#",
    "#..#...#....#",
    "#.#.#.#.#####",
    "#.#.#.#.....#",
    "#.#.#.###.#E#",
    "#...........#"
};

int playerX = 1;
int playerY = 1;

void drawMaze() {
    system("cls");  // 콘솔 화면 클리어
    for (int i = 0; i < ROW; i++) {
        printf("%s\n", maze[i]);
    }
    printf("\n[WASD 키로 이동] [E 지점 도달 시 클리어]\n");
}

int movePlayer(char input) {
    int dx = 0, dy = 0;

    switch (input) {
        case 'w': case 'W': dx = -1; break;
        case 's': case 'S': dx =  1; break;
        case 'a': case 'A': dy = -1; break;
        case 'd': case 'D': dy =  1; break;
        default: return 0;  // 무시
    }

    int nx = playerX + dx;
    int ny = playerY + dy;

    if (maze[nx][ny] == '#' || nx < 0 || ny < 0 || nx >= ROW || ny >= COL)
        return 0;

    if (maze[nx][ny] == 'E') {
        return 1;  // 탈출 성공
    }

    // 이동 처리
    maze[playerX][playerY] = '.';
    playerX = nx;
    playerY = ny;
    maze[playerX][playerY] = '@';

    return 0;
}

int main() {
    while (1) {
        drawMaze();
        char input;
        printf("이동할 방향을 입력하세요: ");
        input = getchar();
        while (getchar() != '\n'); // 입력 버퍼 비우기

        if (movePlayer(input)) {
            drawMaze();
            printf("\n🎉 축하합니다! 미로를 탈출했습니다!\n");
            break;
        }
    }

    return 0;
}
