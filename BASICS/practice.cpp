#include<iostream>
using namespace std;
int main()
{
    float number1,number2,sum,avg;
    cout<<"Enter Two Number: ";
    cin>> number1>>number2;
    //cin>> number2;
    sum=number1+number2;
    avg=sum/2;
    cout<<"Sum= "<<sum<<"\n";
    cout<<"Aveage= "<<avg<<"\n";

    return 0;

}