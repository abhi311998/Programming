#include<iostream>
#include<stack>
using namespace std;
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string str;
		cin>>str;
		stack<char> s;
		s.push('*');
		int i,count=0,n=str.length();
		for(i=0;i<n;i++)
		{
			if(s.top()=='(' && str[i]==')')
			{
				count+=2;
				s.pop();
			}
			else
			{
				s.push(str[i]);
			}
		}
		cout<<count<<"\n";
	}
}
