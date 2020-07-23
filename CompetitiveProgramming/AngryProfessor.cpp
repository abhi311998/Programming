#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		short n,k,i,m;
		cin>>n>>k;
		vector<int> arr;
		for(i=0;i<n;i++)
		{
			cin>>m;
			if(m<=0) arr.push_back(m);
		}
	 if(arr.size()>=k) cout<<"NO";
	 else cout<<"YES";
	 cout<<"\n";
	}
}

