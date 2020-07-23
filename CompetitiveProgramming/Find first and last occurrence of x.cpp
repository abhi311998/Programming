#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,x;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>x;
		int begin,last;
		begin=-1;
		for(i=0;i<n;i++)
		{
			if(arr[i]==x) 
			{
				if(begin==-1) begin=i;
				last=i;
			}	
		}
		cout<<begin<<" "<<last<<"\n";
	}
}
