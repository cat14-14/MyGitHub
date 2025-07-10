#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8

char board[SIZE][SIZE];

// 보드 초기화
void initBoard() {
    memset(board, '.', sizeof(board));

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if ((i + j) % 2 == 1) {
                if (i < 3)
                    board[i][j] = 'o';  // 플레이어 2
                else if (i > 4)
                    board[i][j] = 'x';  // 플레이어 1
            }
        }
    }
}

// 보드 출력
void printBoard() {
    printf("\n    0 1 2 3 4 5 6 7\n");
    printf("   -----------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d |", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("   -----------------\n");
}

// 플레이어 기물 개수 세기
int countPieces(char piece) {
    int count = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == piece)
                count++;
    return count;
}

// 유효한 이동인지 확인
int isValidMove(int fx, int fy, int tx, int ty, char player) {
    if (tx < 0 || tx >= SIZE || ty < 0 || ty >= SIZE) return 0;
    if (board[fx][fy] != player) return 0;
    if (board[tx][ty] != '.') return 0;

    int dx = tx - fx;
    int dy = ty - fy;
    char opponent = (player == 'x') ? 'o' : 'x';

    // 기본 이동: 대각선 1칸
    if (abs(dx) == 1 && abs(dy) == 1) {
        if (player == 'x' && dx == -1) return 1; // x는 위로 이동
        if (player == 'o' && dx == 1) return 1;  // o는 아래로 이동
    }

    // 점프 이동: 대각선 2칸 + 상대 기물 넘기
    if (abs(dx) == 2 && abs(dy) == 2) {
        int mx = fx + dx / 2;
        int my = fy + dy / 2;
        if (board[mx][my] == opponent) return 2; // 점프
    }

    return 0;
}

// 이동 수행
void movePiece(int fx, int fy, int tx, int ty, int moveType) {
    char player = board[fx][fy];
    board[fx][fy] = '.';
    board[tx][ty] = player;

    if (moveType == 2) { // 점프인 경우
        int mx = (fx + tx) / 2;
        int my = (fy + ty) / 2;
        board[mx][my] = '.';
    }
}

// 게임 실행
void playGame() {
    char currentPlayer = 'x';
    int fx, fy, tx, ty;

    while (1) {
        printBoard();

        int xCount = countPieces('x');
        int oCount = countPieces('o');

        if (xCount == 0) {
            printf("플레이어 o 승리!\n");
            break;
        }
        if (oCount == 0) {
            printf("플레이어 x 승리!\n");
            break;
        }

        printf("플레이어 %c 차례입니다.\n", currentPlayer);
        printf("이동할 말의 좌표 (행 열): ");
        scanf("%d %d", &fx, &fy);
        printf("이동할 위치 좌표 (행 열): ");
        scanf("%d %d", &tx, &ty);

        int moveType = isValidMove(fx, fy, tx, ty, currentPlayer);
        if (moveType == 0) {
            printf("잘못된 이동입니다. 다시 시도하세요.\n");
            continue;
        }

        movePiece(fx, fy, tx, ty, moveType);
        currentPlayer = (currentPlayer == 'x') ? 'o' : 'x';
    }
}

int main() {
    printf("체커 게임 시작!\n");
    initBoard();
    playGame();
    return 0;
}
