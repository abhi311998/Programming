#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n];
        vector<ll> v;
        for(i=0;i<n;i++) cin>>arr[i];
        v.push_back(arr[n-1]);
        j=0;
        for(i=n-2;i>=0;i-=1)
        {
        	if(arr[i]>=v[j])
        	{
        		j++;
        		v.push_back(arr[i]);
			}
		}
		for(i=v.size()-1;i>=0;i-=1)
		{
			cout<<v[i]<<" ";
		}
        cout<<"\n";    
    }
}
