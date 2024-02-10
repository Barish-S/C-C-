#include<stdio.h>
#include<stdlib.h>

struct collect{
    int num;
    char name;
    int *ptr;
};

int main(){
    collect list;
    list.num=1428;
    list.name='B';
    list.ptr=&list.num;

    printf("Value Of A: %d\n",list.num);
    printf("Value Of B: %c\n",list.name);
    printf("Value Of C: %d\n",*list.ptr);
}