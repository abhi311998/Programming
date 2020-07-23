#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2!=0) cout<<1<<endl;
		else 
		{
			int prod,i,flag=0;
			vector<int> v;
			int q=sqrt(n);
			while(n%2==0 && flag!=1)
			{
				n=n/2;
				v.push_back(2);
				if(n%2==0) flag=1;
			}
			if(flag!=1)
			{
			for(i=3;i<=q && flag!=1;i+=2)
			{
				if(n%i==0)
				{
					while(n%i==0 && flag!=1)
					{
						n=n/i;
						v.push_back(i);
						if(n%2==0) flag=1;
					}
				}
			}
			}
			if(n>2)
			{
				v.push_back(n);
				if(n%2==0) flag=1;
			} 
			prod=1;
			for(i=0;i<v.size();i++)
			{
				prod=prod*v[i];
			}
			cout<<prod<<endl;
		}
	}
}
