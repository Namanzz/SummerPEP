#include<iostream>
using namespace std;

class Student{
    public:
    int RollNo;
    string Name;
    int Age;

    Student(int rollNo, string name, int age)
    {
        this->RollNo = rollNo;
        this->Name = name;
        this->Age = age;
    }

    int getAge()
    {
        return Age;
    }

    void getName()
    {
        cout << "Name: " << Name << endl;
    }

    string getNameString(){
        return Name;
    }
};

class Box{
    public:
    int length;
    int width;
    int height;
    Box(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    int calculateVolume()
    {
        return length * width * height;
    }

    int calculateArea()
    {
        return 2 * (length * width + width * height + height * length);
    }
};

int main()
{
    Student s1(1,"Naman Anand",20);
    Student s2(2,"Chandan Singh Rajput",21);
    Student s3(3,"Lakshay Panwar",22);
    Student s4(4,"Nipun Dangi",22);
    Student s5(5,"Simranjeet Kaur",21);
    Student s6(6,"Mansi Singh",21);

    // cout << "Roll No: " << s1.RollNo << " Name: " << s1.Name << " Age: " << s1.Age << endl;
    // cout << "Roll No: " << s2.RollNo << " Name: " << s2.Name << " Age: " << s2.Age << endl;
    // cout << "Roll No: " << s3.RollNo << " Name: " << s3.Name << " Age: " << s3.Age << endl;
    // cout << "Roll No: " << s4.RollNo << " Name: " << s4.Name << " Age: " << s4.Age << endl;
    // cout << "Roll No: " << s5.RollNo << " Name: " << s5.Name << " Age: " << s5.Age << endl;
    // cout << "Roll No: " << s6.RollNo << " Name: " << s6.Name << " Age: " << s6.Age << endl;

    // s5.getName();
    // cout<<s5.getNameString()<<endl;
    
    Box b1(10, 20, 30);
    Box b2(5, 10, 15);

    int v1= b1.calculateVolume();
    int v2= b2.calculateVolume();
    int a1= b1.calculateArea();
    int a2= b2.calculateArea();

    cout << "Volume of Box 1: " << v1 << " Area of Box 1: " << a1 << endl;
    cout << "Volume of Box 2: " << v2 << " Area of Box 2: " << a2 << endl;

}