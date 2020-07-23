#include<iostream>
#include<map>
using namespace std;
void count_distinct(short arr[],short n,short k)
{
	map <int,int> M;
	short i,count_dist=0;
	for(i=0;i<k;i++)
	{
		if(M[arr[i]]==0)
		{
			count_dist+=1;
		}
		M[arr[i]]+=1;
	}
	cout<<count_dist<<" ";
	for(i=k;i<n;i++)
	{
		if(M[arr[i-k]]==1)
		{
			count_dist-=1;
		}
		M[arr[i-k]]-=1;
		if(M[arr[i]]==0)
		{
			count_dist+=1;
		}
		M[arr[i]]+=1;
		cout<<count_dist<<" ";
	}
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,k;
		cin>>n>>k;
		short arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		count_distinct(arr,n,k);
		cout<<"\n";
	}
}
