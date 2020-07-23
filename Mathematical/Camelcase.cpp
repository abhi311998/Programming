#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	string s;
	cin>>s;
	n=1;
	for(i=1;i<s.length();i++)
	{
		if(s[i]>=65 &&s[i]<=90)
			n++;
	}
	cout<<n;
}
