#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,a;
		cin>>n;
		vector < pair<int,int> > v;
		for(i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(make_pair(a,i));
		}
		sort(v.begin(),v.end());
		int ans=0;
		int max_index=v[n-1].second;
		for(i=n-2;i>=0;i-=1)
		{
			ans=max(ans,max_index-v[i].second);
			max_index=max(max_index,v[i].second);
		}
		cout<<ans<<"\n";
	}
	return 0;
}












/*int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,j,index_i,index_j,max=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((arr[j]>=arr[i]) && ((j-i)>max))
				{
					index_i=i;index_j=j;
					max=j-i;
				}
			}
		}
		cout<<max<<"\n";
		
			
	}
}*/
