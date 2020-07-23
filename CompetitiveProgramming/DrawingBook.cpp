#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	if(n%2==0) n=n+1;
	cout<<min((p/2),((n-p)/2));
}
