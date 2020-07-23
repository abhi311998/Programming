#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short add,n,i,sum=0;
		cin>>n;
		short arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		if(sum%2==0)
		add=2;
		else
		add=1;
		cout<<add<<"\n";
	}
	return 0;
}
