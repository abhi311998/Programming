#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short i,n,x,y;            //UNSOLVED
		cin>>n>>x>>y;
		short A[n],B[n];
		for(i=0;i<n;i++) cin>>A[i];
		for(i=0;i<n;i++) cin>>B[i];
		long long sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+(A[i]>=B[i]?A[i]:B[i]);
			cout<<sum<<" ";
		}
		cout<<endl<<sum<<endl;
	}
}
