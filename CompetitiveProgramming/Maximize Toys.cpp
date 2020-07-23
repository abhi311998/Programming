#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		short n,i,k;
		cin>>n>>k;
		short arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		sort(arr,arr+n);
		for(i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
		i=0;
		while(k>=0 && i<n)
		{
			k=k-arr[i];
			i++;
			count++;
		}
		cout<<i-1<<endl;
	}
}
