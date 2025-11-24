#include <bits/stdc++.h>
using namespace std;

vector<bool> prefixDiv5(vector<int>& nums) {
    vector<bool> ans;
    int val = 0;

    for (int bit : nums) {
        val = (val * 2 + bit) % 5;
        ans.push_back(val == 0);
    }
    return ans;
}

int main() {
    vector<int> nums = {0,1,1};
    auto ans = prefixDiv5(nums);

    for (bool b : ans) cout << (b ? "true" : "false") << " ";
}
