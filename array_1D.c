#include<stdlib.h>
#include <stdio.h>

void arr_display(float arr[],  int size){
for(int i=0; i<size; i++)
printf(" %f ",arr[i]);
}


                                                                                                                                                                               

float arr_avg(int ptr[],  int size){
    float sum=0;
for(int i=0; i<size; i++){
sum+=ptr[i];
}




return sum/size;
}
int main(){
int grade[6]={33,5,7,6,8,110};
printf("array average %f \n", arr_avg(grade,6));
return 0;
}