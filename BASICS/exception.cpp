#include <iostream>
#include <stdexcept> // For std::runtime_error
using namespace std;

int main()
{
    try
    {
        int num = 24;
        int num1 = 0;
        
        if (num1 == 0) // Manually check for division by zero
        {
            throw runtime_error("Division by zero error!");
        }
        
        cout << num / num1 << endl;
    }
    catch (const std::exception& e)
    {
        cerr << "ERROR: " << e.what() << '\n';
    }
    cout<<"Final Process END";

    return 0;
}
