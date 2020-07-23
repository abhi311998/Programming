#include<bits/stdc++.h>
using namespace std;
int main()
{
	short n,m,i,j,max=-1;
	cin>>n;
	short A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	cin>>m;	
	short B[m];	
	for(i=0;i<m;i++)
		cin>>B[i];
		
	sort(A,A+n);
	sort(B,B+m);
	short x=B[m-1]-A[0];
	short D[x]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			D[B[i]-A[j]]++;
		}
	}	
	for(i=0;i<x;i++)
	{
		if(D[i]>max) max = D[i];
		cout<<i<<" : "<<D[i]<<"\n";
	}
	cout<<max;
	for(i=0;i<x;i++)
	{
		if(D[i]==max) cout<<i<<" ";
	}	
		
	cout<<"\n";
		
}
