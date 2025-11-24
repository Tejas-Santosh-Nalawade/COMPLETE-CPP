#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct Fenwick {
    int n;
    vector<ll> bit;
    Fenwick(int n) : n(n), bit(n+1, 0) {}

    void update(int idx, ll val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }

    ll query(int idx) {
        ll s = 0;
        for (; idx > 0; idx -= idx & -idx)
            s += bit[idx];
        return s;
    }

    ll range(int l, int r) { return query(r) - query(l-1); }
};
