#include<stdlib.h>
#include <stdio.h>



int sum(int *ptr, int size){
    int sum=0;
for(int i=0; i<size; i++){
    sum+=ptr[i];
}
return sum;
}



int main(){
    int grade[3]={33,5,7};
    int result;
    result=sum(grade,3);

  printf("Result = %d\n", result);
  printf("this is the commit to test");
    return 0;
}