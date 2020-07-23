#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		short N,i,p,sum1=0,sum2=0;
		cin>>N;
		short arr[N];
		for(i=0;i<N;i++)
			cin>>arr[i];
		p=N/2;
		for(i=0;i<p;i++)
			sum1=sum1+arr[i];
		for(i=p;i<N;i++)
			sum2=sum2+arr[i];
		cout<<sum1*sum2<<"\n";
	}
	return 0;
}

