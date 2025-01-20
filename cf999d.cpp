// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    void solve() {
        // code here
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        priority_queue<int> q;

        for(ll i = 0; i < m; i++) {
            cin >> b[i];
            q.push(b[i]);
        }

        map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }

        bool flag = true;

        for (int i = 0; i < n - m + n; i++){
            if(q.empty()){
                flag = false;
                break;
            }
            int x = q.top();
            q.pop();
            if(mp[x] > 0){
                mp[x]--;
            }
            else{
                q.push(x / 2);
                q.push((x + 1) / 2);
            }

        }

        if (flag && q.empty()) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
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
