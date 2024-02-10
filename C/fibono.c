#include<stdio.h>

int main() {
  int input = 17;
    int pre = 0; 
    int crnt = 1;
    int next; 
    
    printf("%d ", pre); 
    
    for(int i = 1; i < input; i++) {
        printf("%d ", crnt); 
        next = pre + crnt; 
        pre = crnt; 
        crnt = next; 
    }
}