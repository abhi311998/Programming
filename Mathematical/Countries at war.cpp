#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		short N,i,a=0,b=0;
		cin>>N;
		short A[N],B[N];
		for(i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>B[i];
			if(A[i]<B[i])
			b++;
			if(A[i]>B[i])
			a++;
		}
		cout<<a<<" "<<b<<" ";
		if(a>b)
		cout<<"A"<<"\n";
		else if(a<b)
		cout<<"B"<<"\n";
		else
		cout<<"DRAW"<<"\n";
	}
	return 0;
}

