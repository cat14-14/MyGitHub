#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOTTO_PRICE 1000

void generateLotto(int lotto[]) {
    int count = 0;
    while (count < 6) {
        int num = rand() % 45 + 1;
        int duplicate = 0;
        for (int i = 0; i < count; i++) {
            if (lotto[i] == num) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
            lotto[count++] = num;
    }
}

int countMatches(int user[], int win[]) {
    int match = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (user[i] == win[j])
                match++;
        }
    }
    return match;
}

int getReward(int match) {
    if (match == 6) return 2000000;
    if (match == 5) return 1000000;
    if (match == 4) return 50000;
    if (match == 3) return 5000;
    return 0;
}

void playLotto(int *money) {
    if (*money < LOTTO_PRICE) {
        printf("자금이 부족하여 로또를 구매할 수 없습니다.\n\n");
        return;
    }

    int user[6], win[6];
    *money -= LOTTO_PRICE;

    generateLotto(user);
    generateLotto(win);

    printf("내 번호: ");
    for (int i = 0; i < 6; i++) printf("%d ", user[i]);
    printf("\n");

    printf("당첨 번호: ");
    for (int i = 0; i < 6; i++) printf("%d ", win[i]);
    printf("\n");

    int match = countMatches(user, win);
    int reward = getReward(match);

    if (reward > 0)
        printf("%d개 일치! 보상: %d원\n", match, reward);
    else
        printf("%d개 일치! 꽝입니다.\n", match);

    *money += reward;
    printf("현재 자금: %d원\n\n", *money);
}

void playNumberGuess() {
    int target = rand() % 100 + 1;
    int guess;

    printf("1부터 100 사이의 숫자를 맞혀보세요!\n");

    while (1) {
        printf("입력: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("1~100 사이 숫자를 입력하세요.\n");
            continue;
        }

        if (guess < target)
            printf("더 큽니다.\n");
        else if (guess > target)
            printf("더 작습니다.\n");
        else {
            printf("정답입니다! 숫자는 %d였습니다.\n\n", target);
            break;
        }
    }
}

int main() {
    int money = 10000;
    int choice;

    srand(time(NULL));

    printf("로또 시뮬레이션 게임 시작. 초기 자금: %d원\n\n", money);

    while (money > 0) {
        printf("====== 메뉴 ======\n");
        printf("1. 로또 구매\n");
        printf("2. 숫자 맞추기 게임\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        if (choice == 1)
            playLotto(&money);
        else if (choice == 2)
            playNumberGuess();
        else if (choice == 3)
            break; 
        else
            printf("잘못된 선택입니다.\n\n");
    }

    printf("\n게임 종료. 최종 자금: %d원\n", money);
    return 0;
}
