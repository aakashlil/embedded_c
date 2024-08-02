#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void swapDouble(void *a, void *b, int size){
void *temp=malloc(size);
memcpy(temp,a, size);
memcpy(a,b, size);
memcpy(b,temp, size);
free(temp);
}

int main(){
  int a=256, b=4;

  printf("before Swap a=%d  b=%d\n", a, b);
  swapDouble(&a, &b ,1);
  printf("after Swap a=%d  b=%d\n", a ,b);
return 0;
}