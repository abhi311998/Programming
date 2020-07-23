#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> v1,vector<int> v2)
{
	int n1,n2,i,j;
	vector<int> v;
	n1=v1.size();
	n2=v2.size();
	i=0;j=0;
	while(i<n1&&j<n2)
	{
		if(v1[i]<=v2[j])
		{
			v.push_back(v1[i]);
			i++;
		}
		else
		{
			v.push_back(v2[j]);
			j++;
		}
	}
	while(i<n1)
	{
		v.push_back(v1[i]);
		i++;
	}
	while(j<n2)
	{
		v.push_back(v2[j]);
		j++;
	}
	return v;
}

int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n1,n2,i,a;
		cin>>n1>>n2;
		vector<int> ar1;
		vector<int> ar2;
		for(i=0;i<n1;i++)
		{
			cin>>a;
			ar1.push_back(a);	
		} 
			
		for(i=0;i<n2;i++)
		{
			cin>>a;
			ar2.push_back(a);	
		}
		vector<int> v;
		v=merge(ar1,ar2);	
		for(vector<int>::iterator itr=v.begin();itr!=v.end();itr++) cout<<*itr<<" ";
		cout<<endl;		
	}
}
