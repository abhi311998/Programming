#include<iostream>
#include<cmath>
using namespace std;
void FindPF(int n)
{
	int i;
	if(n%2==0)
	{
		arr.push_back(2);
		while(n%2==0)
		{
			n=n/2;
		}
	}
	int q=sqrt(n);
	for(i=3;i<=q;i+=2)
	{
		if(n%i==0)
		{
			arr.push_back(i);
			while(n%i==0)
			{
				n=n/i;
			}
		}
	}
	if(n>2) arr.push_back(n);
}

int main()
{
	short t;
	cin>>t;
	vector <int> arr;
	while(t--)
	{
		int n;
		cin>>n;
		//find prime factors of n
		for(i=0;i<arr.size();i++)
			cout<<arr[i]<<" ";
		cout<<endl;	
		
		arr.clear();
	}
}
