// We can use more than one generic data type in a class template, each generic data type is seperated by the comma
#include <iostream>
using namespace std;
template<class X,class Y, class Z>
class Student
{
    public:
    X roll_no=9;
    Y name="Tejas";
    Z marks=98.5;
    void display_info()
    {
        cout<<"Roll No of student:"<<roll_no<<endl;
        cout<<"Name of Student :"<<name<<endl;
        cout<<"Marks of Student :"<<marks<<endl;

    }

};
int main()
{
    Student <int,string,float> student1;
    Student <int,string,float> student2;
    student1.display_info();
    student2.display_info();

    return 0;
}