#include<stdio.h>
int func(int arr[],int n,int curr_index)
{
	if(curr_index<n)
	{
		int x=arr[curr_index];
		int y=arr[x];
		int z=func(arr,n,curr_index+1);
		arr[curr_index]=y;
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		int z=func(arr,n,0);
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		printf("\n");	
	}
}
