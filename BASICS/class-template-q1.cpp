
#include <iostream>
using namespace std;
template<class T>
class A
{
    public:
    T marks1=20;
    T marks2=30;
    void display()
    {
        cout<<"Marks of Subject 1 :"<<marks1<<endl;
        cout<<"Marks of Subject 2 :"<<marks2<<endl;
    }

};
int main()
{
    A <int> m;
    m.display();
    return 0;
}