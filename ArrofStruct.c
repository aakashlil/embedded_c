#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point *arr=(point*)malloc(2*sizeof(point));
    arr[0].x = 2; // Use the dot operator to access structure members
    printf("Result = %d\n", arr[0].x);
    printf("this is the commit to test");
    return 0;
}
