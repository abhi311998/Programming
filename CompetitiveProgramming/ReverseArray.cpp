#include<iostream>
using namespace std;
#define ll long long
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		int count=0;
		cin>>n;
		m=n;
		while(n%10==0)
		{
			n=n/10;
			count++;
		}
		n=m;
		m=0;
		while(n!=0)
		{
			m=m*10 + (n%10);
			n=n/10;
		}
		if(count!=0)
		{
			for(int i=0;i<count;i++) cout<<0;
	    }
		cout<<m<<"\n";
	}
}
