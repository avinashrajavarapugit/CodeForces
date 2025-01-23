// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 2e18 + 99;
class Solution {
public:
    ll powd(ll a, ll b){
        if(b == 0){
            return 1;
        }
        for(ll i = 1; i < b; i++){
            a = a * 2;
        }
        return a;
    }
    void solve() {
        // code here
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << powd(2, count(v.begin(), v.end(), 0)) * count(v.begin(), v.end(), 1) << endl;
        
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
