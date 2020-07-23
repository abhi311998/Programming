#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binSearch(vector<ll> score, ll n, ll x)
{
    ll l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x < score[mid]) r=mid-1;
        else if(x > score[mid]) l=mid+1;
        else return mid;
    }
    return mid;
}

int main()
{
    ll n,m,i,j,mid;
    cin>>n;
    vector<ll> scores;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(i>0 && m!=scores[scores.size()-1]) scores.push_back(m);
        else if(i==0) scores.push_back(m);
    }
    n=scores.size();
    mid=(n-1)/2;
    for(i=0;i<=mid;i++)
    {
    	ll temp=scores[i];
    	scores[i]=scores[n-1-i];
    	scores[n-1-i]=temp;
	}
//    sort(scores.begin(),scores.end());
////////////////////////////////////////////////////////////////////////////////////////////////
    
    cin>>m;
    ll alice[m],rank;
    
    for(i=0;i<m;i++)
    {
        cin>>alice[i];
        mid=binSearch(scores,n,alice[i]);
        cout<<mid<<" ";
        if(alice[i]<scores[mid])
            rank=n-(mid-1);
        else if(alice[i]==scores[mid])
            rank=n-(mid);
        else if(alice[i]>scores[mid])
            rank=n-(mid);
        if(rank==0) rank+=1;    
        cout<<rank<<"\n";
    }
    
    return 0;
}
