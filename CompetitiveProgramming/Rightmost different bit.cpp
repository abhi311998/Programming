#include <bits/stdc++.h>
using namespace std;
int main() {
	short t;
	cin>>t;
	while(t--)
	{
	    short num1,num2;
	    short i,n1,n2;
		bool flag=0;
	    cin>>num1>>num2;
	    if(num1==num2) flag=0;
		else
	    {
	    	vector<char> str1,str2;
		    while(num1!=0)
		    {
		        if(num1%2==1) str1.push_back('1');
		        else str1.push_back('0');
		        num1=num1/2;
		    }
		    n1=str1.size();
		    cout<<n1<<" ";
		    for(i=0;i<n1;i++) cout<<str1[i];
		    cout<<endl;
		    
			while(num2!=0)
		    {
		        if(num2%2==1) str2.push_back('1');
		        else str2.push_back('0');
		        num2=num2/2;
		    }
			n2=str2.size();
			cout<<n2<<" ";
		    for(i=0;i<n2;i++) cout<<str2[i];
		    cout<<endl;
			
			short m=min(n1,n2);
			if(m==n1)
			{
				while(m--)
				{
					str1.push_back('0');
				}
			}
			else
			{
				while(m--)
				{
					str2.push_back('0');
				}
			}	
			cout<<endl<<str1.size()<<" ";
			for(i=0;i<str1.size();i++) cout<<str1[i];
		    cout<<endl<<str2.size()<<" ";
		    for(i=0;i<str2.size();i++) cout<<str2[i];
		    cout<<endl;
		    m=str1.size();
			for(i=0;i<m;i++)
			{
				if(str1[i]!=str2[i])
				{
					flag=1;
					break;
					}
			}
		}
		cout<<"\nams= ";
		if(flag==1) cout<<i+1;
		else cout<<-1;
		cout<<"\n";
	}
	return 0;
}
