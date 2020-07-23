#include<bits/stdc++.h>
using namespace std;
long long sum(int x)
{
	return x*(x+1);
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short m,k;
		long long n;
		int c=int(pow(10,9)) + 7;
		cin>>n>>m>>k;
		k=k%c;
		n=n%c;
		while(m--)
		{
			n=sum(n+k)%c;
			cout<<n<<" ";
		}
		cout<<endl<<n<<"  "<<n%c<<"\n";
	}
}
