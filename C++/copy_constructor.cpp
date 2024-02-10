#include <iostream>

class A {
public:
    int *ptr;

    A() {
        ptr = new int();
    }

    A(const A &obj) {
        ptr = new int(); 
        *ptr = *(obj.ptr); 
    }

    ~A() {
        delete ptr;
    }
};

int main() {
    A obj1; 
    *(obj1.ptr) = 340; 

    A obj2 = obj1;
    *obj2.ptr=10;
    
    std::cout << "Value in obj1: " << *(obj1.ptr) << std::endl;
    std::cout << "Value in obj2: " << *(obj2.ptr) << std::endl;

}