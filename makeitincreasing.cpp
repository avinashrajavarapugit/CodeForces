// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n == 1){
            cout << 0 << endl;
        }
        else{
        bool f = false;
        int cnt = 0;
        for (int i = n-2; i >= 0; i--){
            while (a[i] > 0 && a[i] >= a[i + 1]){
                cnt++;
                a[i] = a[i]/2;
            }
            if (a[i] == a[i + 1]){
                f = true;
                break;
            }
        }
        if (f){
            cout<< -1 <<endl;
        }
        else
        cout << cnt << endl;
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
