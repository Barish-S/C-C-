#include<iostream>
using namespace std;

template<typename C,typename D>
class A{
    public:
    C a;
    D b;
    A(int x,float y){
        a=x;
        b=y;
    }
    D add(){
        return a+b;
    }
};

int main(){
A<int,float>obj(10,20.10);
printf("%f",obj.add());
}