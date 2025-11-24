#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    cout<<"\n"<<arr;
    cout<<"\n"<<arr[0];
    cout<<"\n"<<&arr[0][0];
    cout<<"\n"<<(arr+1);
    cout<<"\n"<<*(arr+0);
    cout<<"\n"<<**(arr+0);
    cout<<"\n"<<*(arr+1);
    cout<<"\n"<<**(arr+1);
    cout<<"\n"<<*(*(arr+0));
    cout<<"\n"<<*(*(arr+0)+1);
    cout<<"\n"<<*(*(arr+0)+3);
    cout<<"\n"<<*(*(arr+0)+5);
    cout<<"\n"<<*(*(arr+1)+0); 
    cout<<"\n"<<*(*(arr+2)+1);
}
