#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long search(vector <int> ar,int data)
{
    short n,i,found;
    n=ar.size();
    sort(ar.begin(),ar.end());
    i=0;
    while(i<n)
    {
        if(ar[i]==data)
        {
            while(data==ar[i+1])
            {
                i++;
            }
            break;
        }
        i++;
    }
    
    if(i+1<n) return ar[i+1];
    else return -1000001;
    
}
int main() {
	//code
	short t;
	cin>>t;
	while(t--)
	{
	    short n,i,a;
		long long k;
	    cin>>n;
	    vector <int> arr;
	    for(i=0;i<n;i++)
	    {
	        cin>>a;
	        arr.push_back(a);
	    }
	    for(i=0;i<n;i++)
	    {
	        k=search(arr,arr[i]);
	        if(k!=-1000001)
	        {
	            cout<<k<<" ";
	        }
	        else
	        {
	            cout<<"_ ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
