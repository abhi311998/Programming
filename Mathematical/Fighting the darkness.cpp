#include<iostream>
using namespace std;
int main()
{
	short T;
	cin>>T;
	while(T--)
	{
		short N,i,max=-1;
		cin>>N;
		int arr[N];
		for(i=0;i<N;i++)
		{
			cin>>arr[i];
			if(max<arr[i])
			max=arr[i];
		}
		cout<<max<<"\n";
	}
	return 0;
}
