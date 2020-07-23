#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[10],s[2];
	int i,n;
	cin>>str;
	s[0]=str[0];
	s[1]=str[1];
	n=atoi(s);
	if(str[8]=='A')
	{
		if(n==12)
		{
			str[0]='0';
			str[1]='0';
		}
	}
	else if(str[8]='P')
	{
		if(n>=1 && n<=11)
		{
			n=n+12;
			string t;
			stringstream ss;
			ss<<n;
			t=ss.str();
			str[0]=t[0];
			str[1]=t[1];
		}
	}
	for(i=0;i<8;i++)
		cout<<str[i];
}
