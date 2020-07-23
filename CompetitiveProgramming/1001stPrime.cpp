#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n)
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		if(n==1) cout<<2;
		else if(n==2) cout<<3;
		else
		{
			j=1;
			i=2;
			while(i<=n)
			{
				if(prime((6*j)-1)==true)
				{
					i+=1;
					if(i==n) 
					{
						cout<<6*j-1;
						break;
					}
				}
				if(prime((6*j)+1)==true)
				{
					i+=1;
					if(i==n) 
					{
						cout<<6*j+1;
						break;
					}
				}
				j+=1;
			}

		}
		cout<<"\n";
	}
	return 0;
}
