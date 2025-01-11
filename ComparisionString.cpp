// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        long n;
        cin >> n;
        string s;
        cin >> s;
        long cnt = 1, cur = 1;
        for(long p = 1; p < n; p++){
            if(s[p] == s[p - 1]){++cur;}
            else{cur = 1;}
            cnt = (cnt > cur) ? cnt : cur;
        }
        cout << cnt + 1 << endl;

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
