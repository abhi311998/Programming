#include<bits/stdc++.h>
using namespace std;
int median(vector <int> arr)
{
	int i,n;
	n=arr.size()-1;
	sort(arr.begin()+1,arr.end());
	printf(" :::::::::  %d :::",n);
	for(int j=1;j<=arr.size()-1;j++)
		cout<<arr[j]<<" ";
	if(n%2==0) return ((arr[n/2]+arr[(n/2)+1])/2);
	else return (arr[(n+1)/2]);
}
int main()
{
	int n,i,a;
	cin>>n;
	vector <int> arr;
	arr.push_back(0);
	for(i=1;i<=n;i++)
	{
		cin>>a;
		arr.push_back(a);
		for(int j=1;j<=arr.size()-1;j++)
		cout<<arr[j]<<" ";
		cout<<"::: "<<median(arr)<<endl;
	}	
	return 0;
}
