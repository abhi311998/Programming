#include<iostream>
using namespace std;
int binarySearch(int low,int high,int arr[],int key)
{
	int mid;
	while(low <= high)
	{
		mid=(low+high)/2;
		if(arr[mid] < key)
		{
			low=mid+1;
		}
		else if(arr[mid] > key)
		{
			high=mid-1;
		}
		else
		{
			return mid;
	    }
	}
	return -1;
}
int main()
{
	int a;
	cin>>a;
	int arr[]={0,1,2,3,4,5,9,71,89,90};
	int key=9;
	cout<<binarySearch(0,9,arr,key);
	return 0;
}
