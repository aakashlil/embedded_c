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
float *myarry=arr_i(6), *temp;
//myarry=(float*)realloc(myarry,8); //loss of data because realloc can retun null
temp=(float*)realloc(myarry,8*sizeof(float)); //loss of data because realloc can retun null
if(temp!=NULL)
myarry=temp;
myarry[6]=89;
myarry[7]=100;
arr_display(myarry,8);
free(myarry);
return 0;
}
