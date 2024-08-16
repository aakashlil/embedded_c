#include <stdio.h>

// Define a function
void myFunction() {
    printf("Hello, World!\n");
}

int main() {
    // Print the address of the function
    printf("Address of myFunction: %p\n", myFunction);
     printf("Address of myFunction addr: %p\n", &(myFunction));
    
    return 0;
}
