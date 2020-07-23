#include<bits/stdc++.h>
using namespace std;
short no_digits(int num)
{
	short count=0;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	return count;
}
int main()
{
	int p,q,i,r,l,pw,count=0;
	long long sq_num;
	cin>>p>>q;
	for(i=p;i<=q;i++)                                              //num==i
	{
		sq_num=pow(i,2);
		pw=pow(10,no_digits(i));
		r=sq_num%pw;
		l=sq_num/pw;
		
		if(r+l==i)
		{
		//	cout<<l<<" "<<r<<"\t";
			cout<<i<<" ";
			count++;
		}
	}
	if(count==0)
	cout<<"INVALID RANGE";
}
