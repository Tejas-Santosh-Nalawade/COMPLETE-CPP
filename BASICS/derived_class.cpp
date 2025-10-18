#include<iostream>
using namespace std;
class Base
{
    public:Base()
{
    cout<<"\n Base class is calling";

}
void check()  // check function of base
{
    cout<<"\n Check Function is called base";
}
    
};
class Derived:public Base
{
 public:Derived()
 {
    cout<<"\n Derived class constructor is calling";
 }
void check()  // check function of derived
{
    cout<<"\n Check Function is called by derived ";
}
};
int main()
{
    Base =Derived();
    //Derived d=Base();
    b.check();
    Derived d;
    d.check();
    return 0;
}