#include<iostream>
using namespace std;
long long dp[51];
long long func(short n)
{
		if(dp[n]==-1)
		{
		/*	if(n==1) 
			{
				dp[n]=1;
			}
			else if(n==2) 
			{
				dp[n]=2;
			}
			else if(n==3) 
			{
				dp[n]=5;
			}
			else if(n==4) 
			{
				dp[n]=8;
			}  
			else */
			{
				dp[n-1]=func(n-1);
				dp[n-4]=func(n-4);
				dp[n]=2*dp[n-1]-dp[n-4];	
			}
		}
		return dp[n];
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		fill_n(dp,51,-1);
		dp[1]=1;
		dp[2]=2;
		dp[3]=5;
		dp[4]=8;
		short n;
		cin>>n;
		long long x=func(n);
		for(short i=1;i<=n;i++) cout<<dp[i]<<" ";
		cout<<"\n";
	}
}
