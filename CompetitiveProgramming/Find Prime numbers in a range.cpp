#include<iostream>
#include<cmath>
bool checkPrime(int n)
{
	int flag=0,i,m;
	m=int(pow(n,0.5));
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0) return true;
	else return false;
}
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int a,b,n;
		cin>>a>>b;
		for(n=a;n<=b;n++)
		{
			// for each n check prime
			if(n==2 || n==3) cout<<n<<" ";
			else if(n>3)
			{
				double k1=double(n-1)/double(2);
				double k2=double(n+1)/double(2);
				if(k1==int(k1) || k2==int(k2))
				{
					if(checkPrime(n)==1) cout<<n<<" ";	
				}
			}
		}
		cout<<"\n";
	}
}
