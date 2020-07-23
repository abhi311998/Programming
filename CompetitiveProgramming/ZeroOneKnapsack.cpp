#include<bits/stdc++.h>
using namespace std;
struct node
{
	int weight,profit;
};
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n,i,w,W;
		cin>>n>>W;
		node arr[n];
		for(i=0;i<n;i++) cin>>arr[i].weight;
		for(i=0;i<n;i++) cin>>arr[i].profit;
		int V[n+1][W+1];
		
		for(i=0;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				V[i][w]=0;
			}
		}
		for(i=0;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				cout<<V[i][w]<<" ";
			}
			cout<<endl;
		}
		
		for(i=1;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				if(arr[i].weight>w) V[i][w]=V[i-1][w];
				else 
					V[i][w]=max(V[i-1][w],(arr[i].profit + V[i-1][w-arr[i].weight]));
				cout<<V[i][w]<<" ";	
			}
			cout<<endl;
		}
		cout<<endl;
		
		for(i=0;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				cout<<V[i][w]<<" ";
			}
			cout<<"\n";
		}
		
	}
}
