#include <bits/stdc++.h>
using namespace std;

void printFrequencies(vector<int>& arr) {
    unordered_map<int, int> mp;

    for (int x : arr) mp[x]++;

    cout << "Number : Count" << endl;
    for (auto &p : mp) {
        cout << "   " << p.first << "   :   " << p.second << endl;
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 3};
    printFrequencies(arr);
    return 0;
}