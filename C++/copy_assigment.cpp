#include<iostream>
class A{
    public:
    int a;
    A(){
       // a=14;
    }
    A operator =(const A&obj){
        a=obj.a;
    }

};

int main(){
    A obj;
    A obj1;
    obj.a = 14;
    obj1=obj;
    printf("%d",obj1.a);
    obj.a=28;
    printf("%d",obj1.a);
}