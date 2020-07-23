#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,n,m,i,j,flag,max=-1;
	cin>>b>>n>>m;
	int keyboard[n],drives[m];
	for(i=0;i<n;i++)
		cin>>keyboard[i];
	for(i=0;i<m;i++)
		cin>>drives[i];
	sort(keyboard,keyboard+n,greater<int>());
	sort(drives,drives+m);
	flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(keyboard[i]+drives[j]>b) break;
			if(keyboard[i]+drives[j]>max)
			{
				flag=1;
				max=keyboard[i]+drives[j];
			}
		}
	}
	if(flag==0)
		cout<<-1;
	else if(flag==1)
		cout<<max;			
		
}
