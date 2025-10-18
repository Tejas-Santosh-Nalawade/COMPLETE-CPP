#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int num_100=100;
    cout<<"\n"<<&num;
    cout<<"\n"<<sizeof(num);
    num++;
    cout<<"\n"<<num;
    cout<<"\n"<<&num;
    cout<<"\n"<<sizeof(num);
    cout<<"\n"<<&num_100;
    // No object usability concept in C++ as it is static language

return 0;
}