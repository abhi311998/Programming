#include<iostream>
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int n,d,i,j=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++) cin>>arr[i];
        cin>>d;
        int temp[d];
        for(i=0;i<n;i++)
        {
            if(i<d)
            {
                temp[i]=arr[i];
                arr[i]=arr[i+d];
            }
            else if(i>=d && i<n-d)
            {
            	
                arr[i]=arr[i+d];
            }
            else
            {
            	cout<<"j= "<<j<<" temp[j]= "<<temp[j]<<"\n";
            	arr[i]=temp[j];
            	j++;
			}
        }
        for(i=0;i<d;i++)
        	cout<<temp[i]<<" ";
        	cout<<"------->  ";
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";    
    }
}
