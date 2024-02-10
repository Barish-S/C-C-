#include<iostream>
template <typename X> X addition(X a,X b){
    return a+b;
}

template <typename X,typename Y> Y crossadd(X a,Y b,X c){
    return a+b+c;
}

int main(){
    printf("The Addition Integer Is :%d\n",addition<int>(14,28));
    printf("The Addition Float Is :%f\n",addition<float>(14.20,28.20));
    printf("The Addition CrossAdd :%f\n",crossadd<int,float>(14,28.20,10));
}