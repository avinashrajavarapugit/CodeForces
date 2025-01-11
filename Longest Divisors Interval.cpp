// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        long long n;
        cin >> n;
        long long cnt = 1;
        for(long long p = 2; n % p == 0 && p <=n; p++){
            ++cnt;
        }
        cout << cnt << "\n";

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
