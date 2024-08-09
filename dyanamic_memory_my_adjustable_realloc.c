#include<stdlib.h>
#include <stdio.h>
#include<string.h>
void arr_display(int arr[],  int size){
for(int i=0; i<size; i++)
printf(" %d ",arr[i]);
}

void* adustable_realloc(int *size){
    int num;
    int *temp, *arry;
    printf("Enter a int value:");
    scanf("%d",&num);
    if(num==-1)
    return NULL;
    else
    {
        temp=(int*)malloc((*size+1)*sizeof(int));
        if(!temp) return NULL;
        arry=temp;
        arry[*size]=num;
    }
    while(num!=-1){
        *size+=1;
        temp=(int*)realloc(arry,(*size+1)*sizeof(int));
        if(!temp){
            return arry;
        }
        arry=temp;
        printf("Enter a int value:");
        scanf("%d",&num);
        arry[*size]=num;
    }


    return arry;
}
int main()
{
    int size=0;
int *myarray=adustable_realloc(&size);
arr_display(myarray,size);

return 0;
}

