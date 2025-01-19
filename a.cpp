// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        
        int maxFib = 0;
    
        vector<int> possibleA3 = {
            a1 + a2,      
            a4 - a2,      
            a5 - a4       
        };
        
        for (int a3 : possibleA3) {
            int fibCount = 0;
            
            if (a1 + a2 == a3) fibCount++;
            
            if (a2 + a3 == a4) fibCount++;
            
            if (a3 + a4 == a5) fibCount++;
            
            maxFib = max(maxFib, fibCount);
        }
        
        cout << maxFib << "\n";
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