#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,k;
		cin>>n>>k;
		int arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		for(i=0;i<=n-k;i++)
		{
			cout<<*max_element(arr+i,arr+(i+k))<<" ";
		}
		cout<<endl;
	}
}
