#include<bits/stdc++.h>
using namespace std;
int main()
{
	char m;
	int k,i,n;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	string str;
	getline(cin,str);
	cin>>k;
	n=str.length();
	if(k>26) k=k%26;
	cout<<k<<"\n";
	for(i=0;i<n;i++)
	{
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) 
		{
			m=str[i];
			str[i]=str[i]+k;
			if((m>='A' && m<='Z') && !(str[i]>='A' && str[i]<='Z'))
			{
				cout<<"here "<<str[i]<<"--> ";
				str[i]=str[i]-26;
				cout<<str[i]<<"\n";
			}
			else if((m>='a' && m<='z') && !(str[i]>='a' && str[i]<='z'))
			{
				cout<<"here "<<str[i]<<"--> ";
				str[i]=str[i]-26;
				cout<<str[i]<<"\n";
			}
		}
		
	}
	cout<<"\n";
	for(i=0;i<n;i++) cout<<(char)str[i];
}

