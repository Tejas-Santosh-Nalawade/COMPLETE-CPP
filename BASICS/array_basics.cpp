#include<iostream>
using namespace std;
int main()  // ARRAY PRINTING USING BASIC FOR LOOP OR CALLED SCRIPT
{
    int roll_number[5];
    cout<<"Array size is "<<sizeof(roll_number)<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"\n Enter Roll Number ["<<i<<"]"<<endl;
        cin>>roll_number[i];
    }

    for(int i=0; i<5;i++)
    {
        cout << "\n Roll number["<<i<<"]: "<<roll_number[i];
    }
    cout<<"\n____________________________________________________________";

    return 0;
}