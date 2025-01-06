#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        int ans = 0;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
        {
            cout << 0 << "\n";
            continue;
        }
        if (d < b)
        {
            cout << -1 << "\n";
            continue;
        }
        while (b != d)
        {
            b++;
            a++;
            ans++;
        }
        if (a < c)
        {
            cout << -1 << "\n";
            continue;
        }
        while (a != c)
        {
            a--;
            ans++;
        }
        cout << ans << "\n";
    }
}