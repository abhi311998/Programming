#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
	if(n==2 || n==3) return true;
	int flag=0,i,m;
	m=int(pow(n,0.5));
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}                           // Unsuccessful
	if(flag==0) return true;
	else return false;
}


int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,flag=0;  //flag=0 means A wins and vice versa
		cin>>n;
		short arr[n];
		for(i=0;i<n;i++) cin>>arr[i];
		for(i=0;i<n;i++)
		{
			if(i%2==0 && checkPrime(arr[i])==0) //A loses
				flag=1;
			else if(i%2!=0 && checkPrime(arr[i])==0) //B loses
				flag=0;	
				
		}
		if(flag=1) cout<<"B\n";
		else cout<<"A\n";
	}
}
