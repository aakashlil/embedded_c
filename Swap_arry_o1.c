#include<stdlib.h>
#include <stdio.h>


void swap_arr(int  **ptr1, int **ptr2){
int *temp;
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
}
void arr_display(int arr[],  int size){
for(int i=0; i<size; i++)
printf("%d  ",i+1, arr[i]);
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,3,5,6,7};
    int *parr1;
    int *parr2;
    parr1=arr1;
    parr2=arr2;
    arr_display(arr1,5);
    arr_display(arr2,5);
    swap_arr(&parr1, &parr2);
    arr_display(arr1,5);
    arr_display(arr2,5);
     
    return 0;
}