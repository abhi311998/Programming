#include <iostream>
using namespace std;

int main() {
	short t;
	cin>>t;
	while(t--)
	{
	    short n,i,j,k,sum;
	    cin>>n;
	    int arr[n][n];
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            cin>>arr[i][j];
	    int count=1;  
	    for(sum=0;sum<=(2*(n-1));sum++)
	    {
	        if(sum<n) i=0;
	        else
	        {
	            i=count;
	            count++;
	        }
	        k=i;
	        for(;i<=sum;i++)
	        {
	            cout<<i<<sum-i<<"  "<<arr[i][sum-i]<<"\n";
	            if(sum-i==k) break;
	        }
	    }
	              
	    printf("\n");
	}
	return 0;
}
