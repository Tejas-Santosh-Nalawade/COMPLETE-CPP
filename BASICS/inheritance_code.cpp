#include<iostream>
using namespace std;
class Parent
{
    int num;            // Private Acess specifier
    public:void get(){
        cout<<"Enter data : ";
        cin>>num;
    }
    void set()
    {
        cout<<"\n"<<num;
    }
};

class Child :protected Parent
{
 public: void get()
 {
    Parent::get();    // Scope Rersolution Operator
 } 
 void set()
 {
    Parent::set();
 }
};

int main()
{
    Child c1;
    c1.get();
    c1.set();
}