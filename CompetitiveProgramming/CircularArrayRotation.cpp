#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,q,i,m;
	cin>>n>>k>>q;
	if(n<k) k=k%n;
	int arr[n];
	for(i=k;i<n;i++)
		cin>>arr[i];
	for(i=0;i<k;i++)
		cin>>arr[i];
	for(i=1;i<=q;i++)
	{
		cin>>m;
		cout<<arr[m]<<"\n";
	}
			
}
