#include<iostream>
using namespace std;
int main()
{
	int p,d,m,s,sum=0,count=0;
	cin>>p>>d>>m>>s;
	while(sum<=s)
	{
		if(p<=m) p=m;
		sum=sum+p;
		count++;
		p=p-d;
	}
	cout<<count-1<<"   "<<sum-m;
}
