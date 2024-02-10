#include<stdio.h>
#include<stdlib.h>
int main(){
    char *name=(char*)malloc(sizeof(char)*7);
    name[0]='B';
    name[1]='A';
    name[2]='R';
    name[3]='I';
    name[4]='S';
    name[5]='H';
    name[6] = '\0';
    printf("%s\n",name);
    free(name);
}

