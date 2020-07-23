#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int search1(int arr[],int k)
{
    int i,flag=0;
    i=k-1;
    while(arr[k]<arr[i] && i>=0)
    {
        i--;
    }
    return i+1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,k,c=0;;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
  //  if(arr[1]<arr[0]) swap(&arr[0],&arr[1]);
    for(i=1;i<n;i++)
    {
        while(arr[i]<arr[i-1] && i>=0)
        {
        //    k=search1(arr,i);
            swap(&arr[i],&arr[i-1]);
            for(int j=0;j<n;j++) cout<<arr[j]<<" ";
            c++;
            i--;
        	cout<<"\n";
        }
        
    }
    cout<<"ANS= "<<c;
    return 0;
}

