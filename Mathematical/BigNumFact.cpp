#include<bits/stdc++.h>
using namespace std;

int fact(int x,int res[],int res_size);
int main()
{
	int n;
	cin>>n;
	int res[10000],res_size;
	res[0]=1,res_size=1;
	for(int x=2;x<=n;x++)
		res_size=fact(x,res,res_size);
	
	for(int i=res_size-1;i>=0;--i)
	 cout<<res[i];	
}
int fact(int x,int res[],int res_size)
{
	int i,carry=0,prod;
	for(i=0;i<res_size;i++)
	{
		prod = res[i]*x + carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		res[res_size]=carry%10;
		carry=carry/10;
		res_size++;
	}
	return res_size;
}
