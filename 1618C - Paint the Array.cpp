#include <bits/stdc++.h>
using namespace std;
#define ln "/n"
#define lli long long int
#define vii vector<lli>
#define scanv(x) for(auto &i: x) cin >> i

int main()
{
    int t;
    cin >> t; 
	while(t--){
		lli n;
		cin >> n; 
		vii a(n); scanv(a);
		lli g1 = a[0], g2 = a[1];
		for(lli i = 0; i < n; i += 2) g1 = gcd(g1, a[i]);
		for(lli i = 1; i < n; i += 2) g2 = gcd(g2, a[i]);
		bool flag = 0;
		if(g1){
			for(lli i = 1; i < n; i += 2){
				if(a[i] % g1 == 0){
					flag = 1;
					break;
				}
			}
		}
		if(flag){
			if(g2){
				for(lli i = 0; i < n; i += 2){
					if(a[i] % g2 == 0){
						flag = 0;
						break;
					}
				}
			}
			if(flag) cout << g2 << endl;
			else cout << 0 << endl;
		}else cout << g1 << endl;
	}
}
