#include<stdlib.h>
#include <stdio.h>



int arr_max_ele(int ptr[],  int size){
    int max=ptr[0];
for(int i=1; i<size; i++){
    // printf("max_ele debug1 %d \n", ptr[i]);
    if(max<ptr[i]){
    max=ptr[i];
    // printf("max_ele dqebug2 %d \n", max);
}
}
return max;
}
int main(){
    int grade[6]={33,5,7,6,8,110};
    printf("max_ele %d \n", arr_max_ele(grade,6));
return 0;
}