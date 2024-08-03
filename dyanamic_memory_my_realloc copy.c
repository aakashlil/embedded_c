#include<stdlib.h>
#include <stdio.h>
#include<string.h>
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
void* my_realloc(void *ptr, unsigned int old_block, unsigned int New_block){
    int smallsize=old_block < New_block ? old_block:New_block;
    void *temp=malloc(New_block);
    if(!temp) return NULL;
    memcpy(temp,ptr,smallsize);
    free(ptr);
    return temp;
}
int main()
{
float *myarry=arr_i(6), *temp;
//myarry=(float*)realloc(myarry,8); //loss of data because realloc can retun null
temp=(float*)my_realloc(myarry,6*sizeof(float),8*sizeof(float)); //loss of data because realloc can retun null
if(temp!=NULL)
myarry=temp;
myarry[6]=89;
myarry[7]=100;
arr_display(myarry,8);
free(myarry);
return 0;
}

