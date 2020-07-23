#include<iostream>
using namespace std;
int main()
{
	int arr[]={2000,500,200,100,50,20,10,5,2,1};
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,count;
		cin>>n;
		for(i=0;i<10;i++)
		{
			count=0;
			while(n>=arr[i])
			{
				count++;
				n=n-arr[i];
			}
			while(count>0)
			{
				cout<<arr[i]<<ends;
				count-=1;
			}
		}
		cout<<endl;
	}
}
