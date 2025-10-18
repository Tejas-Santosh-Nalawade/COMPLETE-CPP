#include<iostream>
using namespace std;
int main()
{
    // Pointer is a special type of variable which store the adress of same type of variable
    int num=10;
    int *ptr=&num;
    int **ptr_1=&ptr;
    int ***ptr_2=&ptr_1;
    char *cptr;
    float *ptrw;
    cout<<"\n"<<sizeof(ptr);
    cout<<"\n"<<sizeof(cptr);
    cout<<"\n"<<sizeof(ptrw);
    cout<<"\n num "<<&num;
    cout<<"\n pointer "<<ptr<<"\n"<<*ptr;
    // De refrence operator to access the value of the memory address
    cout<<"\n"<<&ptr;
    cout<<"\n"<<ptr_1;
    cout<<"\n"<<*ptr_1;
    cout<<"\n"<<***ptr_2;


return 0;
}