// UGLY NUMBERS
// DP
#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i;
		cin>>n;
		int ugly[n];
		int next_2,next_3,next_5,i2=0,i3=0,i5=0;
		ugly[0]=1;
		i2=i3=i5=0;
		next_2=ugly[0]*2;
		next_3=ugly[0]*3;
		next_5=ugly[0]*5;
		for(i=1;i<n;i++)
		{
			ugly[i]=min(next_2,min(next_3,next_5));
			if(ugly[i]==next_2)
			{
				i2=i2+1;
				next_2=ugly[i2]*2;
			}
			if(ugly[i]==next_3)
			{
				i3=i3+1;
				next_3=ugly[i3]*3;
			}
			if(ugly[i]==next_5)
			{
				i5=i5+1;
				next_5=ugly[i5]*5;
			}
		}
		cout<<ugly[n-1]<<"\n";
	}
}
