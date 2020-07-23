#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		string s,r;
		cin>>s;
		int i,n=s.length(),count=1;
		r=s;
		reverse(r.begin(),r.end());
	for(i=0;i<n-1;i++)
		{
			if(abs((int)s[i+1]-(int)s[i]) == abs((int)r[i+1]-(int)r[i])) count++;
		}

		if(count==n) cout<<"Funny";
		else cout<<"Not Funny";
		cout<<"\n";
	}
}
