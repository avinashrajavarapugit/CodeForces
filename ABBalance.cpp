// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        string s;
        cin >> s;
        int n = s.size();
        if(s[0] != s.back()){s[0] = s.back();}
        cout << s << endl;
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
