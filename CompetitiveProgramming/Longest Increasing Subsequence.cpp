#include<iostream>
using namespace std;
short lis(short arr[],short n)
{
	short i,j,max;
	int lis[n];
	
	// Initialize LIS values for all indexes
	for(i=0;i<n;i++) lis[i]=1;
	
	// Compute optimized LIS values in bottom up manner
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && lis[i]<lis[j]+1)
				lis[i]=lis[j]+1;
		}
	}
	// Pick max of all LIS values
	max=lis[0];
	for(i=0;i<n;i++) if(max<lis[i]) max=lis[i];
	return max;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short i,n;
		cin>>n;
		short arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		cout<<lis(arr,n)<<endl;	
	}
	return 0;
}
