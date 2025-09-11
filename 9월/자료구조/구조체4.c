#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

int main(void) {
    Point A, B;
    Point *p = &A;
    Point *q = &B;
    scanf("%lf %lf", &p->x, &p->y);
    scanf("%lf %lf", &q->x, &q->y);
    double dx = p->x - q->x;
    double dy = p->y - q->y;
    double dist = sqrt(dx*dx + dy*dy);
    printf("%.6f\n", dist);
}