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
		int n,k,l,u;
		cin>>n;
		int arr[n];
		for(l=0;l<n;l++)
		{
			cin>>arr[l];
		}
		cin>>k;
		
		if(k>=(arr[0]+arr[1]) && k<=(arr[n-2]+arr[n-1])) 
		{
			l=0;u=n-1;
			while(l<u)
			{
				if(k<(arr[l]+arr[u])) u--;
				else if(k>(arr[l]+arr[u])) l++;
				else
				{
					flag=1;
					cout<<arr[l]<<" "<<arr[u]<<" "<<k<<endl;
					l++;
					u--;
				}
			}
		}
		if(flag==0) cout<<-1;
		cout<<"\n";
	}
}
