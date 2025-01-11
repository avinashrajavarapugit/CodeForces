// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int res = 1;
        int curr = 1;
        for (int j = 1; j < n; j++) {
            if (a[j] - a[j - 1] > k) {
                curr = 1;
            }
            else{
                ++curr;
                res = (res > curr ? res : curr);
            }
        }
        cout << n - res << "\n";
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
