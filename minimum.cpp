#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	if(n&1==0){
    	    cout<<n/2<<" "<<n/2<<endl;
    	}
    	else{
    	    ll x=1;
    	    for(ll i=2; i*i<=n; i++ ){
    	        if(n%i==0){
    	            x=n/i;
    	            break;
    	        }
    	    }
    	    cout<<x<<" "<<n-x<<endl;
    	}
    }
	return 0;
}
