#include<bits/stdc++.h>
using namespace std;
struct st
{
	int time;
	int d;
};
bool comp(st a,st b)
{
	if(a.time<b.time) return true;
	else if(a.time==b.time)
	{
		if(a.d==-1) return true;
		else return false;
	}
	else return false;
}


int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int i,n,a,max,sum;
		cin>>n;
		struct st arr[2*n];
		for(i=0;i<2*n;i++)
		{
			cin>>arr[i].time;
			if(i<n) arr[i].d=1;
			else arr[i].d=-1;
		}
		n=2*n;
		sort(arr,arr+n,comp);
	
		max=INT_MIN;
		sum=0;
		for(i=0;i<n;i++)
		{
			cout<<sum<<" "<<max<<ends<<ends<<arr[i].time<<" "<<arr[i].d<<"  ";
			sum+=arr[i].d;
			if(sum>max) max=sum;
			cout<<sum<<" "<<max<<endl;
		}		
		cout<<max<<endl;	
	}
}
//635,1032,632,941,1141,1509,1359,128, 123, 626, 313, 350, 853, 1551, 54, 123, 357, 1500, 334, 1315, 131, 1008, 33, 926, 907, 932, 452, 127, 704, 1854, 1718, 1924, 1337, 623, 720,1202, 2100, 2151, 941, 1751, 1549, 1411, 949, 1500 ,647 ,2105 ,1350 ,1552 ,2300 ,2022 ,1238 ,2013 ,1543 ,2300 ,1332 ,2125 ,1300 ,200 ,941 ,924 ,1030 ,800 ,2010 ,755 ,1857 ,1829 ,2335 ,1348 ,1700, 1500

