#include <stdio.h>
#include <stdlib.h>
int main() {
    // Use static allocation for an array of floats
    float values[2] = {2.0, 3.0}, *a;

   
    // Print the values to verify
    printf("myarry[0] = %f\n", values[0]);
    printf("myarry[1] = %f\n", values[1]);
    free(a);
    return 0;
}
