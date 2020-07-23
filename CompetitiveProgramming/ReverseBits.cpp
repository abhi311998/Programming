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
		long long n,val=0;
		int i;
		cin>>n;
		while(n!=0)
		{
			if(n%2==0) str.push_back('0');
			else str.push_back('1');
			n=n/2;
		}
		for(i=str.size();i<32;i++)
		{
			str.push_back('0');
		}
		n=str.size();
		for(i=0;i<32;i++)
		{
			if(str[i]=='1') 
			{
				val=val+pow(2,n-i-1);
			}
		}
		cout<<val<<endl;
	}
}
