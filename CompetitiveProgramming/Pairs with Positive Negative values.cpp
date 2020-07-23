#include <bits/stdc++.h>
using namespace std;
short n,loc;
bool binSearch(short arr[],short l,short x)
{
	short u,mid;
	u=n-1;
	sort(arr,arr+n);
	for(short i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(x<arr[mid]) u=mid-1;
		else if(x>arr[mid]) l=mid+1;
		else if(x==arr[mid])
		{
			loc=mid;
			return true;	
		} 
	}
	return false;
}
int main() {
	short t;
	cin>>t;
	while(t--)
	{
		short i;
		n=0;	
	    loc=-1;
	    cin>>n;
	    short arr[n],temp[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<0 && binSearch(arr,i+1,((-1)*arr[i]))==1) 
			{
				cout<<"ANS = "<<arr[i]<<" "<<(-1)*arr[i]<<" ";
				arr[i]=arr[loc]=0;
			} 
	    }
	    cout<<"\n";
	}
	return 0;
}
