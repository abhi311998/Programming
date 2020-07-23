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
		int n,i;
		char carry='0';
		string str;
		cin>>str;
		n=str.length();
		int mid=(n-1)/2;
		for(i=0;i<=mid;i++)
		{
			char temp=str[i];
			str[i]=str[(n-1)-i];
			str[(n-1)-i]=temp;
		}
	//	cout<<str<<"    ->>    ";
		
		
		if(str[0]>='0' && str[0]<'6') 
		{
			str[0]='0';
			for(i=n-1;i>=0;i-=1) cout<<str[i];	
		}
		else
		{
			i=1;
			str[0]='0'; carry=1;
			while(carry!=0 && i<n)
			{
				int x=(str[i]-'0')+carry;
				if(x<=9)
				{
					str[i]=char(x+'0');
					carry=0;
				}
				else
				{
					int r=x%10;
					str[i]=char(r+'0');
					carry=x/10;
				}
				i++;
			}
			if(carry!=0)
			{
				string st=to_string(carry);
				cout<<st;
				int mid=(st.length()-1)/2;
				int m=st.length();
				for(i=0;i<=mid;i++)
				{
					char temp=st[i];
					st[i]=st[(m-1)-i];
					st[(m-1)-i]=temp;
				}
				str.append(st);
			}
			n=str.length();
			for(i=n-1;i>=0;i-=1) cout<<str[i];
		}
		
		cout<<"\n";
	}
}
