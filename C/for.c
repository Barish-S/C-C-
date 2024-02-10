#include<stdio.h>
#include<stdlib.h>
int main(){
    int numbers[6]={14,05,2001,28,10,2000};
    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        printf("%d\n",numbers[i]);
    }
    
}