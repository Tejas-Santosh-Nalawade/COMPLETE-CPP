#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> pref(n);
    pref[0] = arr[0];

    for (int i = 1; i < n; i++)
        pref[i] = pref[i-1] + arr[i];

    return pref;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> pref = prefixSum(arr);

    for (int x : pref) cout << x << " ";  
    // Output: 1 3 6 10
}
