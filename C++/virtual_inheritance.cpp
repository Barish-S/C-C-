#include<iostream>
#include<stdio.h>

class A {
public:
    A() {
        printf("Constructor From Class: A\n");
    };
    void fuc() {
        printf("Output Of Function\n");
    };
    ~A() {
        printf("Destructor From Class: A\n");
    };
};

class B :virtual public A {
public:
    B() {
        printf("Constructor From Class: B\n");
    }
    ~B() {
        printf("Destructor From Class: B\n");
    }
};

class C :virtual public A {
public:
    C() {
        printf("Constructor From Class: C\n");
    }
    ~C() {
        printf("Destructor From Class: C\n");
    }
};

class D :public B,public C {
public:
    D() {
        printf("Constructor From Class: D\n");
    }

    ~D() {
        printf("Destructor From Class: D\n");
    }
};

int main() {
    D obj;
    obj.fuc();
}
