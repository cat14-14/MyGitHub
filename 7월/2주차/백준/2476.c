#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int max_reward = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int reward = 0;
        if (a == b && b == c) {
            reward = 10000 + a * 1000;
        }
        else if (a == b || a == c) {
            reward = 1000 + a * 100;
        }
        else if (b == c) {
            reward = 1000 + b * 100;
        }
        else {
            int max_value = a;
            if (b > max_value) max_value = b;
            if (c > max_value) max_value = c;
            reward = max_value * 100;
        }

        if (reward > max_reward) {
            max_reward = reward;
        }
    }

    printf("%d\n", max_reward);
    return 0;
}
