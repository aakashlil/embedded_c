#include <stdio.h>

int main() {
    const int a = 20; // Constant variable
    int *ptr = &a; // Pointer to constant integer
    *ptr+=2;
    printf("Value of a: %d\n", *ptr);

    // Attempting to modify the value through the pointer will result in a compilation error
    // *ptr += 1; // This line would cause a compilation error

    return 0;
}
