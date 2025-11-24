#include <bits/stdc++.h>
using namespace std;

int maxSumK(vector<int>& arr, int k) {
    int sum = 0, ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (i >= k) sum -= arr[i - k];
        if (i >= k-1) ans = max(ans, sum);
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    cout << maxSumK(arr, 3) << endl;  
    // Output: 12 (3+4+5)
}
