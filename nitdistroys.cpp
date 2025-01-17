// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        int n;
        cin >> n;
        int cnt = 0;
        bool curr = false;
        while (n--){
            int x;
            cin >> x;
            if (x)
            curr = true;
            else if (curr){
            cnt++;
            curr = false;
            }
        }
        cnt += curr;
        cnt = min(cnt, 2);
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
