#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		unsigned long long sum=0;
		for(i=1;i<n;i+=1)
		{
			sum=sum+(i*(i+1)*(i+1));
		}
		cout<<sum;
		cout<<endl;
	}	
}
