#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	float n;
	n=float(x2-x1)/(v1-v2);
	if(n>0)
	{
		if(n==int(n))
			cout<<"YES"<<"\n";
		else
			cout<<"NO\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
//	cout<<n;
}
