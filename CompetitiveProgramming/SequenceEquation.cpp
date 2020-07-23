#include<bits/stdc++.h>
using namespace std;
int b_search(int i,int j,int arr[],int key)
{
	int mid;
	mid=(i+j)/2;
	if(key==arr[mid]) return mid;
	else if(key>arr[mid]) return b_search(mid+1,j,arr,key);
	else if(key<arr[mid]) return b_search(i,mid-91,arr,key);
}
int main()
{
	int n,i,index1,index2;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
//	for(i=0;i<n;i++)
	{
		cin>>i;
		index1=b_search(0,n-1,arr,i);
	    cout<<index1<<"\n";
		index2=b_search(0,n-1,arr,index1);
		cout<<index2<<"\n";
	}
}
