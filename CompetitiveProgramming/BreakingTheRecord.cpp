#include<iostream>
using namespace std;
int main()
{
	int n,i,max,min,a,b;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=min=arr[0];
	a=b=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			a++;
		}
		if(arr[i]<min)
		{
			min=arr[i];
			b++;
		}
	}
	cout<<a<<" "<<b;
	return 0;
}
