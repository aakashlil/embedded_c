#include<stdlib.h>
#include <stdio.h>
int main(){
    int a=10;
    void *ptr=&a;
  printf("hello world %d\n", *(int*)ptr);
  printf("this is the commit to test");
    return 0;
}