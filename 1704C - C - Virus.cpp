#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <cstdio>
int main()
{
    long t; 
    cin >> t;
    while(t--){
        long n, m; 
        cin >> n >> m;
        std::vector<long> f(m); for(long p = 0; p < m; p++){cin >> f[p];}
        sort(f.begin(), f.end());
        std::vector<long> g(m); g[0] = (n - f.back() + f[0] - 1);
        for(long p = 1; p < m; p++){g[p] = f[p] - f[p - 1] - 1;}
        sort(g.rbegin(), g.rend());
        long saved(0);

        for(long p = 0; p < g.size(); p++){
            g[p] -= 4 * p;
            if(g[p] == 1){++saved;}
            else if(g[p] > 1){saved += (g[p] - 1);}
            else{break;}
        }

        printf("%ld\n", n - saved);
    }   
}
