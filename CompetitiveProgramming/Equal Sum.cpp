#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		bool flag=0;
		int n,i,sum=0,leftsum=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) 
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		for(i=0;i<n;i++)
		{
			sum-=arr[i];
			if(sum==leftsum)
			{
				flag=1;
			}
			leftsum+=arr[i];
		}
		if(flag==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
