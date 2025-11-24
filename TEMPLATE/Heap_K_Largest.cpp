#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : arr) {
        pq.push(x);
        if (pq.size() > k) pq.pop();
    }

    vector<int> ans;
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 23, 12, 9, 30, 2, 50};
    auto ans = kLargest(arr, 3);
    for (int x : ans) cout << x << " ";
}
