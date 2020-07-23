#include<iostream>
#include<vector>
using namespace std;

int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		bool flag=0;
		int n,k,l,r,i,j;
		cin>>n;
		int arr[n];
		for(l=0;l<n;l++)
			cin>>arr[l];
		cin>>k;
		if(n>=4)
		{
		for(i=0;i<n-3;i++)
		{
			for(j=i+1;j<n-2;j++)
			{
				l=j+1;
				r=n-1;
				while(l<r)
				{
					if((arr[i]+arr[j]+arr[l]+arr[r])==k)
					{
						flag=1;
						break;
					}
				}
				if(flag==1) break;
			}
			if(flag==1) break;
		}
		}
		cout<<flag<<"\n";
	}
}
