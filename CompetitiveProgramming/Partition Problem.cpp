// Partioning Problem
// https://en.wikipedia.org/wiki/Partition_problem
#include<bits/stdc++.h>
using namespace std;
bool possible(int *arr,int n)
{
	int i,j,k=0;
	for(i=0;i<n;i++) k+=arr[i];
	k=k/2;
	bool P[k+1][n+1]={false};
	for(i=0;i<=k;i++) 
	{
		P[i][0]=false;
	}
	for(i=0;i<=n;i++) 
	{
		P[0][i]=true;
	}
	cout<<"\n";
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<P[i][j]<<" ";	
		}
		cout<<endl;
	}
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i-arr[j]>=0) 
				P[i][j] = (P[i][j-1] || P[i-arr[j]][j-1]);
			else
				P[i][j] = P[i][j-1];		
		}
	}
	cout<<"\n";
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<P[i][j]<<" ";	
		}
		cout<<endl;
	}
	
	
	return P[k][n];
}
int main()
 {
	//code
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++) cin>>arr[i];
	    
	    bool result=possible(arr,n);
		cout<<"Result: "<<result<<"\n";
	    
	}
	return 0;
}
