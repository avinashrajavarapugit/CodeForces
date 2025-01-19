// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
            cin >> n;
            vector<long long> a(n);
            for (int i = 0; i < n; ++i) cin >> a[i];

            for (int i = 0; i < n - 1; ++i) {
                long long diff = min(a[i], a[i + 1]);
                a[i] -= diff;
                a[i + 1] -= diff;
            }

            bool isNonDecreasing = true;
            for (int i = 0; i < n - 1; ++i) {
                if (a[i] > a[i + 1]) {
                    isNonDecreasing = false;
                    break;
                }
            }

            cout << (isNonDecreasing ? "YES" : "NO") << '\n';
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}

