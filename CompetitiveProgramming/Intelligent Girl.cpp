#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cin>>str;
	short n,i;
	n=str.length();
	short dp[n+1]={0};
	for(i=n-1;i>=0;i-=1)
	{
		if((str[i]-'0')%2==0)  //even digit
		{
			dp[i]+=dp[i+1]+1;
		}
		else
		{
			dp[i]=dp[i+1];
		}
	}
	for(i=0;i<n;i++) cout<<dp[i]<<" ";
}
