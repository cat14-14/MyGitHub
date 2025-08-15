#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int score;
    int idx;
} Item;

int cmp_desc(const void *a, const void *b) {
    const Item *x = (const Item *)a;
    const Item *y = (const Item *)b;
    return (y->score - x->score);
}

int cmp_asc_int(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    Item a[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i].score);
        a[i].idx = i + 1;
    }

    qsort(a, 8, sizeof(Item), cmp_desc);

    int sum = 0;
    int pick[5];
    for (int i = 0; i < 5; i++) {
        sum += a[i].score;
        pick[i] = a[i].idx;
    }

    qsort(pick, 5, sizeof(int), cmp_asc_int);

    printf("%d\n", sum);
    for (int i = 0; i < 5; i++) {
        if (i) printf(" ");
        printf("%d", pick[i]);
    }
    printf("\n");
    return 0;
}
