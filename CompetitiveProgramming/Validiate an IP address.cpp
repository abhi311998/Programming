#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n,i;
	n=str.length();
	if(n>15) cout<<"Invalid\n";
	else 
	{
		int a,b,c,d;
		a=b=c=d=0;
		int aa,bb,cc,dd;
		aa=bb=cc=dd=0;
		i=0;
		while(str[i]!='.')
		{
			aa++;
			a=10*a+(str[i]-'0');
			i++;
		}
		i++;
		while(str[i]!='.')
		{
			bb++;
			b=10*b+(str[i]-'0');
			i++;
		}
		i++;
		while(str[i]!='.')
		{
			cc++;
			c=10*c+(str[i]-'0');
			i++;
		}
		i++;
		while(i<n)
		{
			dd++;
			d=10*d+(str[i]-'0');
			i++;
		}
		if((aa+bb+cc+dd+3)!=n) flag=1;
		else
		{
			if()
		}
		cout<<a<<" "<<b<<" "<<c<<" "<<d;
	}
	if(flag==1) cout<<"Invalid\n";
	else cout<<"Valid\n";
}
