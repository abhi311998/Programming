#include<iostream>
using namespace std;
int main()
{
	short d1[3],d2[3],i;
	for(i=0;i<3;i++)
		cin>>d1[i];
	for(i=0;i<3;i++)
		cin>>d2[i];
	
	if(d1[2] < d2[2]) cout<<0;
	else if(d1[2]==d2[2])
	{
		if(d1[1]<d2[1]) cout<<0;
		else if(d1[1]==d2[1])
		{
			if(d1[0]<=d2[0]) cout<<0;
			else cout<<15*(d1[0]-d2[0]);
		} 
		else if(d1[1]>d2[1]) cout<<500*(d1[1]-d2[1]);			
	}
	else if(d1[2]>d2[2])                       //d1[year] > d2[year]
		cout<<10000;
	return 0;		
}
