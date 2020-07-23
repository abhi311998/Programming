#include<iostream>
#include<cstring>
using namespace std;
short stack[100]={0};
short top;
short pop()
{
	if(top!=-1)
	{
		top=top-1;
		short x=stack[top+1];
		stack[top+1]=0;
		return x;
	}
	return -1;
}
void push(short x)
{
	top=top+1;
	stack[top]=x;
}
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		top=-1;
		string str;
		cin>>str;
		short i,x,y,op,n=str.length();
		for(i=0;i<n;i++)
		{
			if(str[i]>='0' && str[i]<='9')
			{
				//push into the stack
				push(str[i]-'0');
			}
			else
			{
				x=pop();
				y=pop();
				//perform operation and push the value into the stack
				if(str[i]=='+') push(y + x);
				else if(str[i]=='-') push(y - x);
				else if(str[i]=='*') push(y * x);
				else if(str[i]=='/') push(y / x);
			}
			for(op=0;op<n;op++) cout<<stack[op]<<" ";
			cout<<"\n";
		}
		cout<<pop();
	}

return 0;
}

