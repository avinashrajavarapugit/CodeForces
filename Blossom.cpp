#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>



using namespace std;
using namespace __gnu_pbds;
#define int long long
#define mod 1000000007


int powerr(int x,int y)
{
    if(y==0){return 1;}
    int z=powerr(x,y/2);
    z=z*z;
    z%=mod;
    if(y%2)
        {
            z=z*x;
            z%=mod;
        }
    return z;
}

int inv(int x)
{
    return powerr(x,mod-2);
}


int fact[200005];
int invfact[200005];


void compute_fac()
{
    fact[0]=1;
    for(int i=1;i<200005;i++)
        {
            fact[i]=fact[i-1]*i;
            fact[i]%=mod;
        }

}

void compute_invfact()
{
    for(int i=0;i<200005;i++)
        {
            invfact[i]=inv(fact[i]);
        }
}

int ncr(int n,int r)
{
    if(r>n || r<0){return 0;}
    int z=fact[n];
    z=z*invfact[n-r];
    z%=mod;
    z=z*invfact[r];
    z%=mod;
    return z;
}




int32_t main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	compute_fac();
	compute_invfact();


	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){cin>>a[i];}

		int subarrays[n+1];
		memset(subarrays,0,sizeof(subarrays));
		//subarrays having k -1's

		for(int i=0;i<n;i++)
		{
			int dd=0;
			for(int j=i;j<n;j++)
			{
				dd+=(a[j]==-1);
				subarrays[dd]++;
			}

		}

		int llim=n-1;
		int rlim=0;
		int is_first=0;

		int mexes[n+1];//how many have mex>=i 

		int posn[n];
		memset(posn,-1,sizeof(posn));

		for(int i=0;i<n;i++)
		{
			if(a[i]!=-1){posn[a[i]]=i;}

		}
		int pref[n];
		pref[0]=(a[0]==-1);
		for(int i=1;i<n;i++)
		{
			pref[i]=pref[i-1]+(a[i]==-1);
		}
		int rem=pref[n-1];

		int pending=0;

		for(int i=0;i<=n;i++)
		{
			if(i>0)
			{
				int x=posn[i-1];
				if(x!=-1 && is_first==0)
				{
					is_first=1;
					for(int i=0;i<x;i++)
					{
						for(int j=i;j<x;j++)
						{
							int oq=pref[j];
							if(i>0){oq-=pref[i-1];}
							subarrays[oq]--;
							
						}
					}
					for(int i=x+1;i<n;i++)
					{
						for(int j=i;j<n;j++)
						{
							int oq=pref[j];
							if(i>0){oq-=pref[i-1];}
							subarrays[oq]--;
						}
					}
					llim=x;
					rlim=x;
				}
				else if(x!=-1 && x<llim)
				{
					for(int i=x+1;i<=llim;i++)
					{
						for(int j=max(rlim,i);j<n;j++)
						{
							int oq=pref[j];
							if(i>0){oq-=pref[i-1];}
							subarrays[oq]--;
						}
					}
					llim=min(x,llim);
					rlim=max(rlim,x);
				}
				else if(x!=-1 && x>rlim)
				{
					for(int i=0;i<=llim;i++)
					{
						for(int j=max(rlim,i);j<x;j++)
						{
							int oq=pref[j];
							if(i>0){oq-=pref[i-1];}
							subarrays[oq]--;
						}						
					}
					llim=min(llim,x);
					rlim=max(rlim,x);
				}
			}

			if(i>0)
			{
				if(posn[i-1]==-1){pending++;}
			}
			int op=0;

			for(int zz=0;zz<=n;zz++)
			{
				int alpha=subarrays[zz];
				alpha*=ncr(zz,pending);
				alpha%=mod;
				alpha*=fact[pending];
				alpha%=mod;
				alpha*=fact[rem-pending];
				alpha%=mod;
				//if(i==0){cout<<zz<<" "<<subarrays[zz]<<" "<<alpha<<" "<<pending<<"P\n";}
				op+=alpha;
				op%=mod;
			}
			mexes[i]=op;

		}

		//for(int i=0;i<=n;i++){cout<<mexes[i]<<"P\n";}

		for(int i=0;i<=n-1;i++)
		{
			mexes[i]-=mexes[i+1];
			mexes[i]+=mod;
			mexes[i]%=mod;
		}
		int ans=0;
		for(int i=0;i<=n;i++){ans+=(i*mexes[i]);ans%=mod;}
		cout<<ans<<"\n";
	}


	

}



