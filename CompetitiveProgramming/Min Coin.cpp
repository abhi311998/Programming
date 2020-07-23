#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,amount,i;
		cin>>n>>amount;
		int coin[n];
		for(i=0;i<n;i++)
			cin>>coin[i];
		sort(coin,coin+n);	
		int count=0;
		for(i=n-1;i>=0;i-=1)
		{
			while(amount>=coin[i])
			{
				amount=amount-coin[i];
				count++;
			}
		}
		if(amount==0) cout<<count<<"\n";
		else cout<<-1<<"\n";	
	}
}
