#include<iostream>
using namespace std;
template<class X>
void fun(X a)
{
    cout<<"Value of a is : "<<a<<endl;
}
template<class X,class Y>
void fun(X b,Y c)
{
    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of c: "<<c<<endl;
}

int main()
{
    fun(10);
    fun(15,30.5);
    return 0;

}