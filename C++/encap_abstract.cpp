#include<stdio.h>
#include<stdlib.h>

// class Sample{
//     public:
//     void math(){
//         int result=val();
//         printf("%d\n",result);
//     };
//     Sample(){
//         num1=14;
//         num2=28;
//     };
//     private:
//     int num1;
//     int num2;
//     int val(){
//         int result=num1+num2;
//         return result;
//     };
// };

// int main(){
//     Sample obj;
//     obj.math();
// }


//Do your own program

class Sample{     //Own Progaram
    public:
    void value(int a,int b){
        getin(a,b);
    };
    private:
    void getin(int a, int b){
        int c = a=b;
        printf("%d\n",c);
    }

};
int main(){
Sample obj;
obj.value(14,28);
}