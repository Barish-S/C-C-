#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a=(int*)malloc(sizeof(int)*5);
    a[0]=1;
    a[1]=4;
    a[2]=2;
    a[3]=8;
    char b[4]="BA";
    printf("Value Of A: %d\n",a[1]);
    printf("Value Of B: %s\n",b);
}


///Assign heap memory to array