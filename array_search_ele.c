#include<stdlib.h>
#include <stdio.h>



int ele_search(int *ptr, int ele, int size){
for(int i=0; i<size; i++){
    if(ele==ptr[i]){
    // printf("%d position\n", ele);
    return i;}
}
return -1;
}



int main(){
    int grade[3]={33,5,7};
    
    int result, ele=8765;
    result=ele_search(grade,ele,3);
    if(result!=-1)
    printf("element is found at %d position\n", 1+result);
    else
    printf("Elemwnt is not found");

return 0;
}