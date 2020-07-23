#include<iostream>
#include<algorithm>
using namespace std;
int reverse(int n)
{
	int num;
	while(n!=0)
	{
		num=10*num+n%10;
		n=n/10;
	}
	return num;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short i,n,a;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>a;
			arr[i]=reverse(a);
		}
		
		for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";
		
		sort(arr,arr+n);
		
		for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";
		int min=INT_MAX-10;
		for(i=0;i<n-1;i++)
		{
			if((arr[i+1]-arr[i])<min) min=(arr[i+1]-arr[i]);
		}
		cout<<min<<"\n";
	}
}
