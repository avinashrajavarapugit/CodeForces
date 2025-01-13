// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        // code here
        int n;
        cin >> n;
        vector<int> a(n);
        int res = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            res = gcd(res, abs(a[i]- (i + 1)));
        }

        cout << res << endl;

    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution obj;
        obj.solve();
    }
    return 0;
}
