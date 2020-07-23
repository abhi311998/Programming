#include<bits/stdc++.h>
using namespace std;
int main()
{
	short n,i,m;
	cin>>n;
	vector<int> stick;
	for(i=0;i<n;i++)
	{
		cin>>m;
		stick.push_back(m);
	}
	sort(stick.rbegin(),stick.rend());
	while(stick[0]!=0)
	{
		m=stick.size()-1;
		while(stick[m]==0)
		{
			stick.pop_back();
			m=m-1;
		}
		m=stick[stick.size()-1];
		for(i=0;i<stick.size();i++)
		{
			stick[i]=stick[i]-m;
		}
		m=stick.size();
		cout<<m<<"\n";
	}
}
