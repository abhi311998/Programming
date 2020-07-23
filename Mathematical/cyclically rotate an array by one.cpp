#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i;
		cin>>n;
		short arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<arr[n-1]<<" ";
		for(i=0;i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
