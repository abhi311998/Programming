#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,a;
		cin>>n;
		vector <int> pos,neg;
		for(i=0;i<n;i++)
		{
			cin>>a;
			if(a>=0) pos.push_back(a);
			else neg.push_back(a);
		}
		vector<int> :: iterator it;
		for(it=pos.begin();it!=pos.end();it++)
		{
			cout<<*it<<" ";
		}
		for(it=neg.begin();it!=neg.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<"\n";	
	}
}
