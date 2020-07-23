#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,j,sum;
		cin>>n;
		int arr[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			cin>>arr[i][j];
		}
		
		for(sum=0;sum<=n-1;sum++)
		{
			for(i=0,j=sum-i;(i+j<=sum)&&(i<=sum);i++,j--)
			{
				cout<<i<<" "<<j<<" - "<<arr[i][j]<<" ::: ";
			}
			cout<<endl;			
		}
		for(i=1,sum=n;(i<n)&&(sum<=2*(n-1));sum++,i++)
		{
			int p=i;
			for(j=sum-p;(p+j<=sum)&&(p<=sum-i);p++,j--)
			{
				cout<<p<<" "<<j<<" - "<<arr[p][j]<<" ::: ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
