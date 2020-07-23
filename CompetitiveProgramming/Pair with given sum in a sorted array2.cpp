//Pair with given sum in a sorted array

#include<iostream>
#include<vector>
bool check(int arr[],int x,int n)
{
	int l,u,mid;
	l=0;
	u=n-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(x<arr[mid]) 
			u=mid-1;
		else if(x>arr[mid])
			l=mid+1;
		else if(x==arr[mid])
		{
			return 1;
		}		
	}
	return 0;
}
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		bool flag=0;
		int n,k,i,mid;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>k;
		mid=(n-1)/2;
		if((arr[mid]+arr[n-1])<k) 
		{
			flag=0;
		}
		else
		{
		for(i=0;i<=mid;i++)
		{
			if(check(arr,k-arr[i],n)==1)
			{
				flag=1;
				if(arr[i]!=(k-arr[i]))
				cout<<arr[i]<<" "<<k-arr[i]<<" "<<k<<"\n";
			}
		}
		}
		if(flag==0) cout<<-1;
		cout<<"\n";
	}
}
