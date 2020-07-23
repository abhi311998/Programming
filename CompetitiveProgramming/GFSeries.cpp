#include<bits/stdc++.h>
using namespace std;
#define MAX 16
long long dp[MAX];

long long func(int n)
{
	if(dp[n]==-1)
	{
		if(n<=1) 
			dp[n]=n;
		else
		{
			long long x=func(n-2);
			long long y=func(n-1);
			dp[n]=x*x-y;
		}
	return dp[n];			
	}
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		fill_n(dp,MAX,-1);
		dp[0]=0;dp[1]=1;
		int n;
		cin>>n;
		int x=func(n-1);
		for(int i=0;i<n;i++)
		{
			cout<<dp[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
