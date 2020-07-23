#include<iostream>
#include<cstring>
using namespace std;
char stack[101];
short top;
void pop()
{
	if(top!=-1)
	{
		stack[top]='*';
		top=top-1;
	}
}
void push(char ch)
{
	if((stack[top]=='(' && ch==')') || (stack[top]=='{' && ch=='}') || (stack[top]=='[' && ch==']'))
	{
		pop();
	}
	else
	{
		top=top+1;
		stack[top]=ch;
	}
}
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		top=-1;
		string s;
		cin>>s;
		short i,n=s.length();
		for(i=0;i<n;i++)
		{
			push(s[i]);
		}
		for(i=0;i<n;i++)
		{
			cout<<stack[i]<<" ";
		}
		cout<<"\n";
		if(top==-1) cout<<"balanced\n";
		else cout<<"not balanced\n";
	}
}
