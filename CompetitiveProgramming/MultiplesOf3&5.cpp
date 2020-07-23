#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		n=n-1;
		long long a,b,c;
		a=n/3;
		b=n/5;
		c=n/15;
		a=a*(a+1)/2;
		b=b*(b+1)/2;
		c=c*(c+1)/2;
		cout<<(3*a+5*b-15*c)<<"\n";
	}
}

