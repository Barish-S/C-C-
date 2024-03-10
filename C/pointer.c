#include <stdio.h>
#include <stdlib.h>

void pointer(int *ptr){
    *ptr=30;
}

int array(int *ptr){
    printf("%d\n%d\n",ptr[0],ptr[1]);
}

int main(){
    int *ptr;
    int num=10;
    ptr=&num;
    pointer(ptr);
    printf("%d\n",num);
    
    // Correction
    int *arr=(int*)malloc(sizeof(int)*3);
    arr[0]=1;
    arr[1]=4;
    arr[2]=2;
    arr[3]=8;
    array(arr);
}

//create array and pass as a pointer to function