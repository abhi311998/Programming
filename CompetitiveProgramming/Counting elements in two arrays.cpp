#include<bits/stdc++.h>
using namespace std;
int bin(int arr[],int n,int x)
{
int l,u,mid,loc=-100;	
	l=0;u=n-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(x<arr[mid])
		{
			loc=mid;
			u=mid-1;
		}
		else if(x>arr[mid])
		{
			loc=mid;
			u=mid+1;
		}
		else 
		{
			loc=mid;
			break;
		}
	}
	return loc;
}

int main()
{
	int n,i,l,u,x;
	cin>>n;
	int arr1[]={4,8,7,5,1},arr2[]={0,1,1,3,4,5,48};
	for(i=0;i<5;i++)
	{
		cout<<(bin(arr2,7,arr1[i])+1)<<"\n";
	}
	return 0;
}
