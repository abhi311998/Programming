#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	short n,i;
	cin>>n;
	int sum,r;
	sum=0;
	r=5;
	for(i=1;i<=n;i++)
	{
		r=floor(r/2);
		sum=sum+r;
		r=r*3;
	}
	cout<<sum;
}
