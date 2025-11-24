#include <bits/stdc++.h>
using namespace std;


vector<int> nextGreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;  

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main() {
    vector<int> arr = {2,1,5,3,4};
    auto ans = nextGreater(arr);

    for (int x : ans) cout << x << " ";
}
