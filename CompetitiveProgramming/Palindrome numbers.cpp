#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(vector<char> str)
{
	int n=str.size(),i,mid;
	mid=(n-1)/2;
	for(i=0;i<=mid;i++)
	{
		if(str[i]!=str[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		vector<char> str;
		long long num;
		int i;
		cin>>num;
		//cout<<"1\n";
		while(num!=0)
		{
			if(num%2==0) str.push_back('0');
			else str.push_back('1');
			num=num/2;
		}
		//cout<<"2\n"<<str.size()<<"  "<<str[0];
		for(i=str.size()-1;i>=0;i-=1) cout<<str[i];
		cout<<"\n";
		
		cout<<checkPalindrome(str)<<"\n";
	}
}
