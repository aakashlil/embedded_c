#include<stdlib.h>
#include <stdio.h>

void arr_display(float arr[],  int size){
for(int i=0; i<size; i++)
printf(" %f ",arr[i]);
}

float *arr_i(int size){

float *myarray=(float*)calloc(size,sizeof(float));
if(!myarray){
    printf("insuffiecient memory");
    exit(1);
}
for(int i=0; i<size; i++){
printf("enter ele %d:",i+1);
scanf("%f",&myarray[i]);}
return myarray;
}

int main()
{
float *myarry=arr_i(6);
arr_display(myarry,6);
free(myarry);
return 0;
}
