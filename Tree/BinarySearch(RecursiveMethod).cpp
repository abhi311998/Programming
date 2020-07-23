#include<iostream>
using namespace std;
// RECURSIVE METHOD
int binarySearch(int low,int high,int arr[],int key)
{
	int mid=(low+high)/2;
	if(arr[mid]>key) return binarySearch(low,mid-1,arr,key);
	if(arr[mid]<key) return binarySearch(mid+1,high,arr,key);
	else return mid;
}
int main()
{
	int arr[]={0,1,2,3,4,5,9,71,89,90};
	int key=9;
	cout<<binarySearch(0,9,arr,key);
	return 0;
}
