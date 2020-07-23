#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n+1]={0};
		for(i=n-1;i>=0;i-=1)
		{
			cin>>arr[i];
		}		
		int carry=0,res;
		res=arr[0]+1;
		arr[0]=res%10;
		carry=res/10;
		i=1;
		while(carry!=0)
		{
			res=carry%10+arr[i];
			arr[i]=res%10;
			carry=res/10;
			i++;
		} 
		if(arr[n]!=0)
		{
			for(i=n;i>=0;i-=1) cout<<arr[i]<<" ";
		}
		else
		{
			for(i=n-1;i>=0;i-=1) cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
}
