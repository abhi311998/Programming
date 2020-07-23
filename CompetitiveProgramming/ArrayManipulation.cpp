#include<iostream>
using namespace std;
int main()
{
	int n,m,a,b,k,i;
	cin>>n>>m;
	long long arr[n]={0};
	while(m--)
	{
		cin>>a>>b>>k;
		for(i=a;i<=b;i++)
		{
			arr[i]+=k;
		}
	}
	long long max=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max) max=arr[i];
	}
	cout<<max;
}
