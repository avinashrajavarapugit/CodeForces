// Source: Avinash
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        // code here
        vector<string> v; 
        v.push_back("00"); v.push_back("25"); v.push_back("50"); v.push_back("75");
        string n;
        cin >> n;
        long res(n.size() + 1);
        for(long p = 0; p < v.size(); p++){
            bool first(false), second(false); long cnt(0);
            for(long i = n.size() - 1; i >= 0; i--){
                if(!first && n[i] == v[p][1]){first = true;}
                else if(first && n[i] == v[p][0]){second = true; break;}
                else{++cnt;}
                //std::cout << v[p] << " n[i]:" << n[i] << "  first:" << first << " second:" << second << " cnt:" << cnt << std::endl;
            }

            if(!second){cnt = n.size();}
            //std::cout << v[p] << " " << cnt << std::endl;
            res = (res < cnt) ? res : cnt;
        }

        cout << res << endl;
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
