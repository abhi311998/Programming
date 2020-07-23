#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,amount;
		cin>>n;
		int comb[n+1];
		fill_n(comb,n+1,1);
		int coin=2;
		for(amount=2;amount<=n;amount++)
		{
			if(amount>=coin)
				comb[amount]+=comb[amount-coin];
		}
		cout<<comb[n]<<"\n";
	}
}
