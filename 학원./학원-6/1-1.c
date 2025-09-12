#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct {
    Point lt;
    Point rb;
} Rectangle;

void Show(Rectangle *p2) {
    printf("[%d,%d]\t[%d,%d]\n", p2->lt.xpos, p2->lt.ypos, p2->rb.xpos, p2->lt.ypos);
    printf("[%d,%d]\t[%d,%d]\n", p2->lt.xpos, p2->rb.ypos, p2->rb.xpos, p2->rb.ypos);
}
int Area(Rectangle *r) {
    int width = r->rb.xpos - r->lt.xpos;
    int height = r->rb.ypos - r->lt.ypos;
    return width * height;
}

int main(void) {
    Rectangle a = {{0, 0}, {100, 100}};
    Show(&a);
     printf("넓이: %d\n", Area(&a));
    return 0;
}
