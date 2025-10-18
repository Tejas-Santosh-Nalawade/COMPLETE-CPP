#include<iostream>
using namespace std;
void greet(); // Function Decleration
int sum_digit(int num);
int main()
{
    greet(); // function calling 
    cout<<"Sum of digit: "<<sum_digit(123);
    return 0;
}
void greet() // Function defination
{
    cout<<"Hello Sir";
}
// sum of all digit in a number 
int sum_digit(int n)
{
    int sum=0;
    while(n !=0)
    {
        sum+=(n%10);
        n/=10;
    }
        return sum;
}