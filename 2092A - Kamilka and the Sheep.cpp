/*
This solution uses propert gc(a1 + d, a2 + d) = gcd(a2 - a1, 

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int mx, mn;
        cin >> k;
        mx = mn = k;
        for(int j = 1; j < n; j++)
        {
            cin >> k;
            if(k > mx) mx = k;
            if(k < mn) mn = k;
        }
        cout << mx - mn << endl;
    }
    
}
