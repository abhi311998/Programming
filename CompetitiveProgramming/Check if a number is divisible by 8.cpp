#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		short i,n;
		bool flag=0;
		n=str.length();
		if(n<=2)
		{
			if(stoi(str)%8==0) flag=1;
		}
		else
		{
			n=str[n-1]+10*str[n-2]+100*str[n-3];
			if(n%8==0) flag=1;
			cout<<n<<" ";
		}
		cout<<endl;
		if(flag==1) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}
