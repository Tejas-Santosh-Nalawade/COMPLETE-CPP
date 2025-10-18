#include<iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 4) {
        cout << "DPU ";
        int j = 0;
        while (j < 4) {
            cout << "Good ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}


