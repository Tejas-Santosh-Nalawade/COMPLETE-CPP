#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"\n Actual Data num1: ";
    cin >> num1;
    cout<<"\n Actual Data num2: ";

    cin >> num2;
    swap(num1,num2) ;
    cout<<"\n Swap Data num1: "<<num1;
    cout<<"\n Swap Data num2: "<<num2;


}
void swap(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}