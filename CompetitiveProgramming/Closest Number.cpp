#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<int> arr(n);
    for(i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int min=arr[1]-arr[0];
    for(i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<min) min=(arr[i+1]-arr[i]);
    }
    cout<<min<<endl;
    for(i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"\n";
    i=0;
    while(i<n-1)
    {
        if((arr[i+1]-arr[i])==min) cout<<arr[i]<<" "<<arr[i+1]<<" ";
        i++;
    }
}
