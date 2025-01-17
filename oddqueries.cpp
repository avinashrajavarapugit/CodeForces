// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n, q, l, r, k;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) a[i] += a[i - 1];
        }
        int total = a[n - 1];
        while (q--) {
            cin >> l >> r >> k;
            int sum = total - (a[r - 1] - (l > 1 ? a[l - 2] : 0)) + k * (r - l + 1);
            cout << (sum % 2 ? "YES" : "NO") << endl;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) Solution().solve();
    return 0;
}
