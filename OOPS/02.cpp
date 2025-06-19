#include<iostream>
using namespace std;

/*
A constructor is a special type of function which is called automatically when an object is created.
It will have same name as that of class.
It does not have any return type.
It is used to initialize the data members of the class.
*/

class Student{
    public:
    Student(){
        cout << "Default constructor called!!" << endl;
    }

    void display()
    {
        cout << "Display function called!!" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();
}