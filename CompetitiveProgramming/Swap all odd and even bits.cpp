#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		vector<char> str;
		long long val=0;
		int i,n;
		cin>>n;
		while(n!=0)
		{
			if(n%2==0) str.push_back('0');
			else str.push_back('1');
			n=n/2;
		}
		n=str.size();
		for(i=0;i<n;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
		if(str.size()%2!=0) str.push_back('0');
		n=str.size();
		for(i=0;i<n;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
		for(i=0;i<n;i+=2)
		{
			char temp=str[i];
			str[i]=str[i+1];
			str[i+1]=temp;
		}
		for(i=0;i<n;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
		//REVERSE
		int mid=(n-1)/2;
		for(i=0;i<=mid;i++)
		{
			char temp=str[i];
			str[i]=str[n-i-1];
			str[n-i-1]=temp;
		}
		for(i=0;i<n;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
		//VALUE 
		for(i=0;i<n;i+=1)
		{
			if(str[i]=='1') 
			{
				val=val+pow(2,n-i-1);
			}
		}
		cout<<val<<endl;
	}
}
