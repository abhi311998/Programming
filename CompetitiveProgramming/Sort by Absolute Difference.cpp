#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct node
{
	int diff;
	int value;
};
bool comp(struct node a,struct node b)
{
	if(a.diff<b.diff) return true;
	else return false;
}
int main()
{
	short t;
	cin>>t;
	while(t--)
	{
		int n,i,k,m;
		cin>>n>>k;
		struct node arr[n];
		for(i=0;i<n;i++)
		{
			cin>>m;
			arr[i].diff=abs(k-m);
			arr[i].value=m;
		}
		stable_sort(arr,arr+n,comp);
		for(i=0;i<n;i++)
		{
			cout<<arr[i].value<<" ";
		}
		cout<<"\n";	
	}
}
