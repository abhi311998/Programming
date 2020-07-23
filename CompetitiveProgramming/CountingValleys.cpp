#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	char arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0,prev_sum=0,count=0,s;
	for(i=0;i<n;i++)
	{
		if(arr[i]=='U') s=1;
		else if(arr[i]=='D') s=-1;
		
		sum=sum+s;
		if(sum==0 && prev_sum<0)
			count++;
		prev_sum=sum;
	}
	cout<<count;
	return 0;
}
