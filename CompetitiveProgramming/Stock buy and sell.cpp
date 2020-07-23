#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int i,n,start,end,flag=0;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		start=0,end=0;		
		for(i=1;i<n;i++)
		{
			if(arr[i]>arr[i-1])
			{
				end++;
			}
			else if(arr[i]<arr[i-1])
			{
				if(start!=end)
				{
					flag=1;
					cout<<"("<<start<<" "<<end<<")"<<" ";
				} 
				start=i;end=i;
			}
			if(i==n-1 && start!=end)
			{
				cout<<"("<<start<<" "<<end<<")"<<" ";
			}

		}
		if(flag==0) cout<<"No Profit";
		cout<<endl;
	}
}
