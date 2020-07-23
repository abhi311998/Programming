#include<bits/stdc++.h>
using namespace std;
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		short n,i,max=-1,element;
		cin>>n;
		short arr[n],temp[1000]={0};
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			temp[arr[i]]++;
		}
		for(i=0;i<1000;i++)
		{
			if(temp[i]>max)
			{
				max=temp[i];
				element=i;
			}
		}
		for(i=0;i<10;i++) cout<<temp[i]<<" ";
		cout<<"\n";
		cout<<max<<" "<<ceil(float(n)/2)<<"\n";
		if(max>=ceil((float)n/2)) cout<<element;
		else cout<<-1;
		cout<<"\n";
	}
}
