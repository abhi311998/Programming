#include<iostream>
using namespace std;
int kadane(int arr[],int n)
{
	int i,max_so_far,max_end_here;
	max_so_far=max_end_here=arr[0];
	for(i=1;i<n;i++)
	{
		max_end_here=max(arr[i],arr[i]+max_end_here);
		max_so_far=max(max_so_far,max_end_here);
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
		int ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		cout<<kadane(ar,n)<<endl;	
	}
	return 0;
}
