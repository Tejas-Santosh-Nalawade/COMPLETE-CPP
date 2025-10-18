#include<iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << "DPU ";
        int j = 0;
        do {
            cout << "Good ";
            j++;
        } while (j < 4);
        cout << endl;
        i++;
    } while (i < 4);
    return 0;
}
