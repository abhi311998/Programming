#include<bits/stdc++.h>
using namespace std;
int main()
{
	short T;   //Test Case variable
	cin>>T;
	while(T--)
	{
		int n,m,rem,count=0;
		cin>>n;
		m=n;
		while(n>0)
		{
			rem=n%10;
			n=n/10;
			if(rem!=0)
				if(m%rem==0)
					count++;
		}
		cout<<count<<"\n";
	}
}

