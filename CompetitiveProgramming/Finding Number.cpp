#include<iostream>
using namespace std;
int bin_search_1(int arr[],int l,int r,int k)
{
	int mid;
	while(l<=r)
	{
		if(k<arr[mid]) r=mid-1;
		else if(k>arr[mid]) l=mid+1;
		else if(k==arr[mid]) return mid; 
	}
	return -1;
}
int bin_search_2(int arr[],int l,int r,int k)
{
	int mid;
	while(l<=r)
	{
		if(k>arr[mid]) r=mid-1;
		else if(k<arr[mid]) l=mid+1;
		else if(k==arr[mid]) return mid; 
	}
	return -1;
}

int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,k,pivot,max=-99999999,index1,index2;
		index1=index2=-1;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) 
		{
			cin>>arr[i];
			if(arr[i]>max)
			{
				pivot=i;
			}
		}
		cin>>k;
		index1=bin_search_1(arr,0,pivot,k);
		index2=bin_search_2(arr,pivot,n-1,k);
		cout<<(index1>=index2?index1:index2)<<"\n";
	}
}
