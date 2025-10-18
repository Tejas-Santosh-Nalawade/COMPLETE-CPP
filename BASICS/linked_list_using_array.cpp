#include<iostream>
using namespace std;
int main()
{
    int si;
    cout<<"\nEnter size of linked list: ";
    cin>>si;
    int *start;
    int node_data[si]={};
    int *node_address[si]={};
    start=node_data;

    for(int i=0 ; i<si; i++)
    {
        cout<<"\n Enter Data for node: "<<i;
        cin>>node_data[i];
        if (i==(si-1))
        {
            node_address[i]=nullptr;
        }
        else
        {
            node_address[i]=(node_data+i+1);
        }
    for(int i=0 ; i<si; i++)
    {
        cout<<"\n"<<node_address[i]<<" "<<node_data[i];
    }
    }
    return 0;
}