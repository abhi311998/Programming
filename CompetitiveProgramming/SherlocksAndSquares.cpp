#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		cout<<floor(sqrt(b)+1)-ceil(sqrt(a))<<"\n";
	}
}

