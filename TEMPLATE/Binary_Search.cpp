#include <bits/stdc++.h>
using namespace std;

bool can(int mid, vector<int>& arr) {
    return arr[mid] >= 5;   // sample condition
}

int searchCustom(vector<int>& arr) {
    int l = 0, r = arr.size() - 1, ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (can(mid, arr)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << searchCustom(arr) << endl;
}
