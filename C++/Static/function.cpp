#include<iostream>
using namespace std;
class A{
    public:
    static int a;
    static int b;
    static void merge(){
        printf("%d",A::a+A::b);
    }
};
int A::a;
int A::b;
int main(){
    A::a=14;
    A::b=28;
    A::merge();
}