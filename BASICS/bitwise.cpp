#include<iostream>
using namespace std;
int main(){
    int age=18;
    int marks=62;
    if(!((age>18)&&(10/0==0))){
        cout<<"Qualified";
    }
    else{
        cout<<"Not Qualified";
        
    }
} 