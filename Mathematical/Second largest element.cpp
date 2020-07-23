#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,flag;
		cin>>n;
		short arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=n-1;i>0;--i)
		{
			if(arr[i]!=arr[i-1])
			{
				flag=1;
				break;
			}
			else
				flag=0;
		}
		if(flag==1)
			cout<<arr[i-1]<<"\n";
		else
			cout<<"No such element exists!!!"<<"\n";	
		
	}
	return 0;
}
