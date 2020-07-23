#include<bits/stdc++.h>
using namespace std;
int func(int n,int arr[])
{
	int i;
	int count=1;
	sort(arr,arr+n);
	i=n-2;
	while(arr[n-1]==arr[i])
	{
		count++;
		i=i-1;
	}
	return count;
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<func(n,arr);
	return 0;
}
