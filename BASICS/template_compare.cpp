#include<iostream>
using namespace std;
template<class X,class Y>
void get(X a,Y b)
{
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Value of b is : "<<b<<endl;

} 
template<class X,class Y>
void check(X a, Y b)
{
    if (a>b)
    {
        cout<<"Number 1 is greater then 2 "<<a<<endl;
    }
    else if(a==b)
    {
        cout<<"Number are equal"<<endl;
    }
    else
    {
        cout<<"Number 2 is greater then 1 "<<b<<endl;
    }
}
int main()
{
    get(25,36);
    check(12,120);
    return 0;
}