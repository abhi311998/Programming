#include<iostream>
using namespace std;
int main()
{
	int n,d,i;
	cin>>n>>d;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	if(d==n)
	for(i=0;i<n;i++) cout<<arr[i]<<" ";
	else
	{
		for(i=d;i<n;i++) cout<<arr[i]<<" ";
		for(i=0;i<d;i++) cout<<arr[i]<<" ";
	}	
}
