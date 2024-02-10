#include<stdio.h>
#include<stdlib.h>
class FirstClass{
    public:
    virtual int number(){
        printf("\n FirstClass Output");
    }
};
class SecondClass:public FirstClass{
    public:
    int a;
    virtual int number(){
        printf("\n SecondClass Output");
    }
};  

int main(){
    FirstClass* ptr=new SecondClass();
    ptr->number();
    FirstClass* ptr1=new FirstClass();
    ptr1->number();
}