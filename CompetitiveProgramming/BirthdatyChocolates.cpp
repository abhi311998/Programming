#include<iostream>
using namespace std;
int main()
{
	short n,i,j,d,m;
	cin>>n;
	short arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	cin>>d>>m;
	short sum,count=0;
	for(i=0;i<=n-m;i++)
	{
		sum=0;
		for(j=i;j<=i+m-1;j++)
		{
			sum=sum+arr[j];
		}
	//	cout<<"SUM="<<sum<<"\t";
		if(sum==d)
		{
			count++;
		}
	//	cout<<count<<"\n";
	}
	//cout<<"\n";
	cout<<count;
	return 0;
}
