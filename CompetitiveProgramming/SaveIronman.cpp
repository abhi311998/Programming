#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string str;
		getline(cin,str);
		int n=str.length();
		int i,j,mid,flag=0;
		mid=(n-1)/2;
		for(i=0,j=n-i;i<=mid;i++)
		{
			if(isalnum(str[i]))
			{
			//	j=n-i-1;
				while(!(isalnum(str[j])))
				{
					j-=1;
				}
				if(isupper(str[i])) str[i]=str[i]+32;
				if(isupper(str[j])) str[j]=str[j]+32;
			//	cout<<i<<" - "<<str[i]<<" :: "<<j<<" - "<<str[j]<<"\n";
				if(str[i]!=str[j])
				{
					flag=1;
					break;
				}
				else
				{
					str[j]='*';					
				}
			}
		}
		if(flag==0) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
