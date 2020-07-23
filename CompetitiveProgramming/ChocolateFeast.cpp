#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,m,w,left,c2,c3=0;
		cin>>n>>c>>m;
		w=n/c;     //no of choc. = no of wrappers  ((( w = c1 )))
		c2=w/m;                        //no of choc. after replacing wrappers
		left=w%m;                          //no of wrappers left
		if((left+c2)>=m) 
		{
			c3=(left+c2)/m;
		}                                     
		cout<<(w+c2+c3)<<"\n";
	}
}
