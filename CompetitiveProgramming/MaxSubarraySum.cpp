#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		long long m,sum,val,max=-1;
		cin>>n>>m;
		long long arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)            //select starting index of subarray
		{
			for(j=i;j<n;j++)                 //select final index of subarray
			{
				sum=0;
				for(k=i;k<=j;k++)
				{
				//	cout<<arr[k]<<" ";
					sum=sum+arr[k];
				}
				val=sum%m;
				if(val>max) max=val;
			//	cout<<"<<<<>>>>SUM="<<sum<<"<<<<<>>>>>MAX="<<max;
			//	cout<<"\n";
			}
		}
		cout<<max<<"\n";
	}
	return 0;
}
