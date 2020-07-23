#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int i,count=0;
	for(i=0;i<str.length();i++)
	{
		if(i%3==0 && str[i]=='S') count++;
		else if(i%3==1 && str[i]=='O') count++;
		else if(i%3==2 && str[i]=='S') count++;
	}
	cout<<str.length()-count;
}
