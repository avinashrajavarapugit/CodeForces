// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        // code here
        ll n, x;
        cin >> n >> x;
        ll a = 0, b = 0;
        vector<int> arr(n);
        for(int i = 0; i< n; i++){
            cin >> arr[i];
            a += arr[i];
            b += (arr[i]%x == 0) ? (arr[i]/x) : (arr[i]/x + 1);
        }
        cout << ((a%x == 0) ? (a/x) : (a/x + 1)) << ' ' << b << endl;

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
