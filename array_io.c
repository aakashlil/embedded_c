#include<stdlib.h>
#include <stdio.h>




void arr_display(float arr[],  int size){
for(int i=0; i<size; i++)
printf("element %d %f \n",i, arr[i]);
}

void arr_i(float arr[],  int size){
for(int i=0; i<size; i++){
printf("enter ele %d:",i+1);
scanf("%f",&arr[i]);}
}


int main(){
float grade[6];
arr_i(grade,6);
arr_display(grade,6);
return 0;
}
