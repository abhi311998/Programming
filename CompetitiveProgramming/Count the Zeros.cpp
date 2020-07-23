#include<stdio.h>
int binSearch(int arr[],int n)
{
	int l,u,mid;
	l=0;u=n-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(arr[mid]==1 && arr[mid+1]==1) l=mid+2;
		else if(arr[mid]==1 && arr[mid+1]==0) return mid+1;
		else if(arr[mid-1]==1 && arr[mid]==0) return mid;
		else if(arr[mid-1]==0 && arr[mid+1]==0) u=mid-2;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,ans,k;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		if(arr[0]==0) ans=n;
		else if(arr[n-1]==1) ans=0;
		else
		{
			k=binSearch(arr,n);
			ans=n-k;
		}
		printf("%d\n",ans);
	}
}
