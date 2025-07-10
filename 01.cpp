#include<iostream>
using namespace std;

void myFunc(int &x){
    x++;
    cout<<"The new value of x is: "<<x<<endl;
}

int main(){
    int a=5;
    myFunc(a);
    cout<<"The value of a is: "<<a<<endl;
    int *ptr=&a;
    int **ptr2=&ptr;

    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Value of ptr is: "<<ptr<<endl;
    cout<<"Value to which ptr is referencing to: "<<*ptr<<endl;
    cout<<"Address of ptr is: "<<ptr2<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;
    cout<<"Value of ptr is: "<<**ptr2<<endl;
}