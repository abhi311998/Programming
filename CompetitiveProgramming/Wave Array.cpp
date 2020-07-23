#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,m;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		if(n%2!=0) m=n-1;
		else m=n;
		for(i=0;i<m;i+=2)
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}	
		cout<<"\n";
	}
}
