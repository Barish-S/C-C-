#include<iostream>
using namespace std;
class A{
    public:
    static int k;
};
int A::k;
int main(){
    A::k=14;
    printf("Static Value %d\n",A::k);
    A::k=28;
    printf("Modified Static Value %d",A::k);
}