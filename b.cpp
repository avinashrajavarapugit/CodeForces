// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int x, y;
        cin >> x >> y;
        int r[x * y], t[x * y];
        set<int> z[x * y];
        bool v[x * y];
        for (int i = 0; i < x; i++) z[i].clear();
        memset(t, -1, sizeof t);
        memset(v, 0, sizeof v);
        for (int i = 0; i < x; i++) {
            int n;
            for (int j = 0; j < y; j++) {
                cin >> n;
                z[i].insert(n);
            }
            t[*z[i].begin()] = i;
        }
        bool ok = 1;
        for (int i = 0; i < x * y; i++) {
            if (i < x) {
                if (t[i] == -1 || v[t[i]]) {
                    ok = 0;
                    break;
                }
                r[i] = t[i];
                z[t[i]].erase(z[t[i]].begin());
                t[*z[t[i]].begin()] = t[i];
                v[t[i]] = 1;
            } else {
                if (t[i] == -1 || r[i % x] != t[i]) {
                    ok = 0;
                    break;
                }
                z[t[i]].erase(z[t[i]].begin());
                t[*z[t[i]].begin()] = t[i];
            }
        }
        if (ok) {
            for (int i = 0; i < x; i++) cout << ++r[i] << ' ';
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
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
