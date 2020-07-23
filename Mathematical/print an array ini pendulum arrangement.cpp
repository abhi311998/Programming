#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,j,k,mid;
		cin>>n;
		short arr[n],res[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		mid=(n-1)/2;
		j=k=1;
		res[mid]=arr[0];
		for(i=1;i<n;i++)
		{
			if(i%2!=0)           //odd indexed
			{
				res[mid+k]=arr[i];
				k=k+1;
			}
			else
			{
				res[mid-j]=arr[i];
				j=j+1;
			}
		}
		for(i=0;i<n;i++)
		cout<<res[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
