#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,d,count=0;
	cin>>n>>d;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(arr[j]-arr[i]==d)
			{
				for(k=j+1;k<n;k++)
				{
					if(arr[k]-arr[j]==d)
					{
						count++;
						break;
					}
				}
				break;
			}
			else if(arr[j]-arr[i]>d) break;
		}
	}
	cout<<count;	
}
