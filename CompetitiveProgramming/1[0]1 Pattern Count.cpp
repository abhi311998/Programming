#include<iostream>
#include<cstring>
using namespace std;
int main()
{                                    //Incomplete
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n,i,flag=0,count=0;
		string str;
		cin>>str;
		n=str.length();
		for(i=0;i<n;i++)
		{
			if(str[i]=='1'&&str[i+1]=='0')
			{
				cout<<i<<" ";
				i=i+1;
				while(str[i]=='0')
				{
					i++;
					if(str[i]=='1') flag=1;
				}
				if(flag==1)
				{
					count++;
					i-=1;
				}
				cout<<i<<" "<<count<<"\n";
				flag=0;
			}
		}
		cout<<count<<"\n";
	}
}
