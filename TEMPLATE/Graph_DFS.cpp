#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;

void dfs(int node) {
    vis[node] = 1;
    for (int nxt : adj[node]) {
        if (!vis[nxt]) dfs(nxt);
    }
}

int main() {
    int n = 5;
    adj.assign(n, {});
    vis.assign(n, 0);

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[3].push_back(4);

    dfs(0);

    for (int i = 0; i < n; i++)
        cout << vis[i] << " ";
}
