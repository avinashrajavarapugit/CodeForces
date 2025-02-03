// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    void solve() {
        // code here
        ll n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        // find no of distint ele in vector a and vector b
        //if atleast 2 ele break in a and b
        set<int> res;
        for(int i = 0; i < n; i++) {
            res.insert(a[i] + b[i]);
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
                res.insert(a[i] + b[i]);
                res.insert(a[j] + b[j]);
                swap(a[i], a[j]); // swap back
            }
        }
        if(res.size() >= 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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
