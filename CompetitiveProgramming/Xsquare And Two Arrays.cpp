#include<iostream>
using namespace std;
int main()
{
	int n,q,a,b,i,x;
	cin>>n>>q;
	int A[n],B[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	for(i=0;i<n;i++)
		cin>>B[i];
	long long A_B[n+1]={0},B_A[n+1]={0};
	long long prev1=0,prev2=0;
	for(i=0;i<n;i++)
	{
		// Filling Array A_B  &  B_A
		if(i%2==0)
		{
			A_B[i+1]=prev1+A[i];
			B_A[i+1]=prev2+B[i];
		}
		else
		{
			A_B[i+1]=prev1+B[i];
			B_A[i+1]=prev2+A[i];
		}
		prev1=A_B[i+1];
		prev2=B_A[i+1];		
	}
	for(i=0;i<n+1;i++)
	{
		cout<<i<<"-->"<<A_B[i]<<" "<<B_A[i]<<"\n";
	}			
	while(q--)
	{
		cin>>x>>a>>b;
		if(x==1)
		{
			cout<<A_B[b]-A_B[a-1];
		}
		else
		{
			cout<<B_A[b]-B_A[a-1];
		}
		cout<<"\n";
	}
}
