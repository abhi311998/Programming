#include<iostream>
using namespace std;
int main()
{
	int n,t,i,j,min;
	cin>>n>>t;
	short arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	while(t--)
	{
		cin>>i>>j;
		min=arr[i];
		while(i<=j)
		{
			if(arr[i]<min) min=arr[i];
			i++;
		}
		cout<<min<<"\n";
	}	
}
