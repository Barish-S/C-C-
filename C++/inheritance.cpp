#include<stdio.h>
#include<stdlib.h>

class Sample{
    public:
    int a;
    char name;
    Sample(){
        a=1428;
        name='B';
    }
    void addition(){
        int a=10;
        int b=20;
        int c=a+b;
        printf("%d\n",c);
        privatedata();
        protectData();
    };
    private:
    void privatedata(){
        char data[12]="PrivateData";
        printf("%s\n",data);
    };
    protected:
    void protectData(){
        int collection[4]={1,5,6,7};
        printf("From Protected : %d\n",collection[0]);
        };
    };

class DerivedSample:public Sample{
    public:
    void testadd(){
        addition();
        protectData();    //Completed
    };
    int *ptr;
    int num;
    DerivedSample(){
        num=20;
        ptr=&num;
    }

};

class DerivedDouble:public DerivedSample{
    public:
    void testdouble(){
        addition();
    };
};

int main(){

    Sample add;
    printf("Printed From Sample Class:\n");
    add.addition();
    add.a=add.a+1428;
    printf("%d\n",add.a);
    printf("%c\n",add.name);
    
    
    DerivedSample sub;
    printf("Printed From Derived Class:\n");
    sub.testadd();
    printf("%d\n",sub.a);
    printf("%d\n",*sub.ptr);
    
    DerivedDouble tree;
    printf("Printed From DerivedDouble Class:\n");
    tree.testdouble();

}


//Use protected in derived class