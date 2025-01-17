// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        // code here
        ll n, k, l;
        cin >> n >> k >> l;
        k <<= 1;
        l <<= 1;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] <<=1;
        }
        ll t = 0;
        ll pos = 0;
        ll i = 0;
        t += a[0];
        a[0] = 0;
        pos = k;
        i = 1;
        while (pos < l && i < n) {
            if (abs(a[i] - pos) <= t)
            a[i] = pos;
            else if (a[i] <= pos){
                a[i] += t;
                pos = a[i] + k;
                i++;
                continue;
            }
            else
                a[i] -= t;
            ll d = abs(a[i] - pos);
            assert(d & 1 ^ 1);
            t += d/2;
            a[i] -= d/2;
            pos = a[i] + k;
            i++;

        }
        cout << ((pos < l) ? (t + l - pos) : t) << endl;
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
