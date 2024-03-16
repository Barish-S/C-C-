// #include<iostream>
  
// class A{
//     public:
//     int a;
//     virtual void numeric()=0;
//     void name(){
//         printf("Print name");
//     };
// };

// class B:public A{
//     public:
//     virtual void numeric()
//     {
//         a=30;
//         printf("%d\n",a+10);
//         name();
//     }
// };

// int main(){
//     B obj;
//     obj.numeric();
// }


#include<iostream>
class A{
    public:
    virtual void animal()=0;
    void hello(){
        printf("Hello From Class A !!");
    }
    void birds(){
        printf("Hello From Class B");
    }
    void wild(){
        printf("Hellow From Class C");
    }
};
class B:public A{
    public:
    virtual void animal(){
        hello();
    }
};
class C:public B{
};

int main(){
    char val='B';
    A* ptr=new C();
    switch(val){
        case 'A':
        ptr->birds();
        break;
        case 'B':
        ptr->hello();
        break;
        case 'C':
        ptr->wild();
        break;
    }
}