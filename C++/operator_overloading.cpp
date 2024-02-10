#include<iostream>
class A{
    public:
    int a;
    int b;
    int c;
    A(){
        a=14;
        b=28;
    }
    A operator -(const A&val){
        A obj2;
        obj2.c=a+val.b;
        return obj2;
    }
};

class B{
    public:
    int d;
    int e;
    B(){
        d=28;
        e=14;
    }
};

int main(){
A obj;
A obj1;
A obj2=obj-obj1;

printf("%d\n",obj2.c);
}
