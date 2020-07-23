#include<iostream>
using namespace std;
int main()
{
	int arr[]={74,32,89,55,21,64};
	int n=6,i,j,minPos;
	for(i=0;i<n-1;i++)
	{
		minPos=i;
		for(j=i+1;j<n;j++)
			if(arr[j]<arr[minPos])
			{
				//swap(arr[j],arr[minPos])
				int t=arr[j];
				arr[j]=arr[minPos];
				arr[minPos]=t;
			}
	}
	for(i=0;i<n;i++) cout<<arr[i]<<" ";
}
