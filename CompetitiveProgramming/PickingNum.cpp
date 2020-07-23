#include<bits/stdc++.h>
using namespace std;
int main()
{
	short n,i,k,max=-1000;
	cin>>n;
	short arr[100]={0};
	for(i=0;i<n;i++)
	{
		cin>>k;
		arr[k]++;
	}
	for(i=0;i<100;i++)
	cout<<arr[i]<<" ";	
	for(i=0;i<100;i++)
	{
		if((arr[i]+arr[i+1])>max)
		{
			max=arr[i]+arr[i+1];
		//	cout<<max<<" ";
		}
	}
	cout<<"\n"<<max;
}
