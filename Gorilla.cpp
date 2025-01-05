#include <bits/stdc++.h>
using namespace std;
int t,n,k;
map<int,int> mp;
int main()
{
	scanf("%d",&t);while(t--)
	{
		scanf("%d%d",&n,&k);
		mp.clear();
		for(int i=1;i<=n;++i){int x;scanf("%d",&x);++mp[x];}
		static vector<int> vv;
		vv.clear();
		for(auto x:mp)vv.push_back(x.second);
		sort(vv.begin(),vv.end());
		// printf("vv:");for(int x:vv)printf("%d ",x);putchar(10);
		int ans=vv.size(),sum=0;
		for(int i=0;i+1<vv.size();++i)
		{
			sum+=vv[i];
			if(sum<=k)ans=min(ans,(int)vv.size()-i-1);
		}
		printf("%d\n",ans);
	}
}