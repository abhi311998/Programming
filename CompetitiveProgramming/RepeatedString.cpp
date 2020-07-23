#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cin>>str;
	long long n,sum;
	cin>>n;
	int i,rem,count;
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='a')
		count++;
	}
	rem=n%str.length();
	sum=(n/str.length())*count;
	for(i=0;i<rem;i++)
	{
		if(str[i]=='a')
			sum++;
	}
	cout<<sum;
}
