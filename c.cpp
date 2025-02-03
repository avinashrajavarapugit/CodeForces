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
        vector<vector<int>> a(n, vector<int>(n));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
            {
                dp[i][j + 1] = dp[i][j] + a[i][n - 1 - j];
            }
        }

        int res = -1;
        int mx = n;
        for(int i = 0; i< mx; i++){
            int ans = 0;
            for(int j = 0; j< n; j++){
                if(dp[j][i] == i){
                    ans += 1;
                }
            }
            if(ans != 0){
                res = i;
            }
            mx = min(mx, i + ans);
        }
        cout << res + 1 << endl;

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
