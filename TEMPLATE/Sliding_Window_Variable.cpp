#include <bits/stdc++.h>
using namespace std;

int longestSubstrNoRepeat(string s) {
    vector<int> freq(256, 0);
    int l = 0, ans = 0;

    for (int r = 0; r < s.size(); r++) {
        freq[s[r]]++;

        while (freq[s[r]] > 1) {
            freq[s[l]]--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }
    return ans;
}

int main() {
    cout << longestSubstrNoRepeat("abcabcbb") << endl;
    // Output: 3
}
