#include<iostream>
using namespace std;
int main()
{
	short n,k,i,b;
	int sum=0;
	cin>>n>>k;
	short bill[n];
	for(i=0;i<n;i++)
	{
		cin>>bill[i];
		if(i!=k)
		sum=sum+bill[i];
	}
	cin>>b;
	sum=sum/2;
	if(sum==b)
	cout<<"Bon Appetit";
	else
	cout<<b-sum;
	return 0;
}
