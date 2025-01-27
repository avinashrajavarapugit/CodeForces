// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool is2pow(ll n)
        {
            ll div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        return true;
                    }
                }
            }
            return false;
    }
    
    void solve() {
        // code here
        ll n;
        cin >> n;
        if (n%2 == 1){
                cout << "YES" << endl;
        }
        else{
            if (is2pow(n)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;   
            }
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
