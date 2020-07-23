#include<iostream>
using namespace std;
#define ll long long 
ll fib[21]={0};
ll fibb(ll fib[],int n)
{
	if(fib[n]==0 && n>2)
	{
		ll x=fibb(fib,n-2);
		ll y=fibb(fib,n-1);
		fib[n]=x + y*y;
	}
	return fib[n];
}

int main()
{
	ll i,t1,t2,n;
	cin>>t1>>t2>>n;
	fib[1]=t1;
	fib[2]=t2;
	ll x=fibb(fib,n);
	
	cout<<fib[n];
}
