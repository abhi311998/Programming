#include<iostream>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,m,s,i;
		cin>>n>>m>>s;
		int left;                                      //cnady left after evenly distributing
		int last;                                      //last person to get the candy
		if(n<m) left=(m-n)%m;
		else left=n%m;
		int k=left+s-1;
		cout<<"left="<<left<<"   k="<<k<<"\n";
		if(k<=n) last=k;
		else if(k>n) last=k%n;
		cout<<last<<"\n";
	}
}
