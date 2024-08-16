#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    point center;
    double radius;
} circle;


int main() {
    circle c1={{2,3},5};

    printf("x = %d \n", c1.center.x);
    printf("y = %d\n", c1.center.y);
    printf("radius = %lf\n", c1.radius);
    return 0;
}
