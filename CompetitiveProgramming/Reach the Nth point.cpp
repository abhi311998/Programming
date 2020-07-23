#include<iostream>
using namespace std;
long long dp[91];
long long fib(int n)
{
	if(dp[n]==-1)
	{
		if(n<=1) dp[n]=n;
		else 
		{
			dp[n]=fib(n-1)+fib(n-2);
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
		int n;
		cin>>n;
		n=n+1;
		fill_n(dp,n+1,-1);
		long long x=fib(n);
		cout<<dp[n]<<endl;
	}
}
