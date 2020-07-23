#include<iostream>
using namespace std;

int func(int coins[],int amount,int n)
{
	int combinations[amount+1]={0};
	combinations[0]=1;
	int i,j,k,curr_coin;
	for(i=0;i<n;i++)
	{
	//	cout<<"CURRENT COIN = "<<coins[i]<<"\n";
		curr_coin=coins[i];
		for(j=1;j<=amount;j++)
		{
	//		cout<<"AMOUNT = "<<j<<"\n";
			if(j>=curr_coin)
			{
				combinations[j]+=combinations[j-curr_coin];
			}
	//		for(k=0;k<=amount;k++) cout<<combinations[k]<<" ";
	//		cout<<"\n";
		}
	//	cout<<"\n";
		
	}
	return combinations[amount];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,amount,i;
		cin>>n;
		int coins[n];
		for(i=0;i<n;i++) cin>>coins[i];
		cin>>amount;
		cout<<func(coins,amount,n)<<"\n";
	}
}
