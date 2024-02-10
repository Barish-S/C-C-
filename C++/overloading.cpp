#include<stdio.h>
#include<stdlib.h>
class Over{
    public:
    int name(){
        printf("Hii,Everone....Its Empty \n");
    }
    int name(int a){
        printf("Its Your Number %d\n",a);
    }
};

class OverAgain:public Over
{
    public:
    int name(int a,char b){
            printf("Its Your Number %d\n",a);
            printf("Its Your Char %c\n",b);
        }
};

int main(){
    OverAgain obj1;
    obj1.name(10,'B');

    Over obj;
    obj.name();
    obj.name(1428);
}
