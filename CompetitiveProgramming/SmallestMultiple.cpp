#include<iostream>
using namespace std;
int gcd(int A,int B)
{
	if(B==0) return A;
	else return gcd(B,A%B);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,ans=1;
		cin>>n;
		for(i=2;i<=n;i++)
		{
			ans=(ans*i)/gcd(ans,i);
		}
		cout<<ans<<"\n";
	}
	
}
