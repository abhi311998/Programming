//Codechef :- October Challenge
//Chef SERVE

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int chef,cook,k,r,d,ans;
		cin>>chef>>cook>>k;
		r=(chef+cook)%k;
		d=ceil((chef+cook)/k);
		if(d%2==0) ans=2;
		else ans=1;
		if(ans=1) cout<<"CHEF\n";
		else cout<<"COOK\n";
	}
}
