#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, x, n) for(int i = x; i < (int)(n

int main(){
    int n;
    cin >> n;
    while(n--){
        int n, a, b;
        cin >> n >> a >> b;
        if(a+b >= n-1){
            if(a==n && b==n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        cout << "YES" << endl;
    }
}