#include <bits/stdc++.h>
using namespace std;

pair<int,int> twoSum(vector<int>& arr, int target) {
    int i = 0, j = arr.size() - 1;
    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == target) return {i, j};
        else if (sum < target) i++;
        else j--;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    auto ans = twoSum(arr, 7);
    cout << ans.first << " " << ans.second << endl;
}
