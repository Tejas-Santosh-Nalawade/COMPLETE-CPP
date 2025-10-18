#include<iostream>
using namespace std;
//int addition(int,int);
int addition(int*,int); // FUNCTION DECLARATION

int main() // Passing array to the function
{   
    //cout<<"\n Addition of number: "<<addition(25,36);
    int l;
    cout<<"\n Enter length of array: ";
    cin>>l;
    int arr[1]={};
    for(int i=0;i<l;i++)
    {
        cout<<"\n Enter arr["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<"\n"<<addition(arr,l);
    return 0;
}
// int addition(int num1,int num2)
// {
//     return(num1+num2);
//}
int addition(int *ptr,int length)
{
    int sum=0;
    for (int i=0;i<length;i++)
    {
        sum+=(*(ptr+i));
        
    }
    return sum;
}