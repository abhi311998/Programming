#include<iostream>
using namespace std;
int main()
{
	short n,i;
	int count=0;
	cin>>n;
	short arr[101]={0},ab[n];
	for(i=0;i<n;i++)
	{
		cin>>ab[i];
		arr[ab[i]]++;
	}
	for(i=0;i<101;i++)
	{
		count=count+(arr[i]/2);
	}
	cout<<count;
	return 0;
}
