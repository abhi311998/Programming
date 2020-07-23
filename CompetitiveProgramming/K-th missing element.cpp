#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,j,k,count=0,flag=0;
		cin>>n>>k;
		short arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		j=arr[0];
		for(i=0;i<n;i++)
		{
			while(arr[i]!=j)
			{
				count++;
				if(count==k)
				{
					flag=1;
					break;
				}
		//		j=arr[i]+1;
				j++;
			}
			if(flag==1) break;	
			else j++;
		}
		if(count==k) cout<<j;
		else cout<<"-1";
		cout<<"\n";
	}
}
