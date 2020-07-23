#include<bits/stdc++.h>
using namespace std;
int search(int k,int arr[],int n)
{
	int index=100000000;
	for(int j=k;j<n;j++)
	{
		if(arr[j]==arr[k-1])
		{
			index=j;
			break;
		}
	}
	cout<<index<<" ";
	return index;
}
int main()
{
	int n,i,index,min=100000000;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	for(i=0;i<n-1;i++)
	{
		cout<<arr[i]<<"  :"<<i<<" ";
		index=search(i+1,arr,n);
		if(index<=n)
		{
			if(abs(index-i)<min) min=abs(index-i);
			cout<<min<<"\n";	
		}
	}
	cout<<"\n\n";
	cout<<min;
		
}
