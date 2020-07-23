#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,m;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>m;
			if(i==0) arr[i]=m;
			else arr[i]=arr[i-1]+m;
		}
		
		m=0;
		if(n==1) m=1;
		else if(arr[n-2]==0) m=1;
		else 
		{
			for(i=1;i<=n-2;i++)
			{
				if(arr[i-1]==(arr[n-1]-arr[i])) m=1;
			}
		}
		if(m==1) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
