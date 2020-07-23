#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a,b,m,min1,min2,max1,max2,sum1,sum2;
		double x,y;
		cin>>n>>a>>b;
		if(n<=2)
		{
			if(a<b) m=a;
			else m=b;
			cout<<m*n<<"\n";
		}
		else if(n>2)
		{
			x =b*n/(a+b);
        	min1=x;
        	max1=x+1;
        	y =a*n/(a+b);
        	min2 =y;
       		max2 =y+1;
        	sum1=(a*min1*min1 + b*max2*max2);
        	sum2=(a*max1*max1 + b*min2*min2);
        	cout<<min(sum1,sum2)<<"\n";		
		}
	}
}
