#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    int salary;
} employee;
void increaseSalary(employee* ep1){
 (*ep1).salary+=100000;
}
int main() {
    employee ep1={"aakash", 27, 150000};
    increaseSalary(&ep1);
    increaseSalary(&ep1);
    printf("Result = %d\n", ep1.salary);
    printf("this is the commit to test");
    return 0;
}
