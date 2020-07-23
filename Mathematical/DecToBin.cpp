#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,c,b,r;
		cin>>n;
		c=1;
		b=0;
		while(n!=0)
		{
			r=n%2;
			b=b+r*c;
			c=c*10;
			n=n/2;
		}
		cout<<b<<"\n";
	}
	return 0;
}

