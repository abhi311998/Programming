#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		short N1,N2,i,j,max=0,min=0;
		cin>>N1;
		short A[N1];
		for(i-0;i<N1;i++)
		{
			cin>>A[i];
			if(i==0)
			max=A[i];
			if(max<A[i])
			max=A[i];
		}
		cin>>N2;
		short B[N2];	
		for(j=0;j<N2;j++)
		{
			cin>>B[j];
			if(j==0)
			min=B[j];
			if(min>B[j])
			min=B[j];
		}
		cout<<max*min<<"\n";
		
	}
	return 0;
}

