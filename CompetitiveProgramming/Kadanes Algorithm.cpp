#include<iostream>
#define max(a,b) a>b?a:b
using namespace std;
int kadanes(int arr[],int n)
{
	int curr_sum=arr[0];
	int max_so_far=arr[0];
	for(int i=1;i<n;i++)
	{
		curr_sum=max(arr[i],curr_sum+arr[i]);
		max_so_far=max(curr_sum,max_so_far);
	}
	return max_so_far;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		cout<<kadanes(arr,n)<<endl;
	}
}
