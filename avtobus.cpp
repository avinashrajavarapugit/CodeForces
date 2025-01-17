// Source: Avinash
#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
    void solve() {
        // code here
        long long n,mn,mx;
        cin>>n;
        if(n%2==1 || n<4) cout<<-1<<endl;
        else
        {
            mn = n/6;
            if(n%6!=0) mn++;
            
            mx = n/4;

            cout<<mn<<" "<<mx<<endl;
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
