#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // map declaration
    map<int, string> mymap;

    // mapping integers to strings
    mymap[1] = "Hi";
    mymap[2] = "This";
    mymap[3] = "is";
    mymap[4] = "NBN";

    // using operator[] to print string mapped to integer 4
    cout << mymap[4];  // prints "NBN"
    
    return 0;
}
