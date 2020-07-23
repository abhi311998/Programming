#include<iostream>
using namespace std;
int func(int arr[],int n)
{
	int i,right=0,left=0;
	for(i=0;i<n;i++) right+=arr[i];
	for(i=0;i<n;i++)
	{
		right-=arr[i];
		if(right==left)
			return i+1;
		left+=arr[i];	
	}
	return -1;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<func(arr,n)<<"\n";	
	}
}
