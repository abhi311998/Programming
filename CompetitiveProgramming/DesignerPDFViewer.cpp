#include<bits/stdc++.h>
using namespace std;
int main()
{
	short arr[26],i,max=0,k;
	for(i=0;i<26;i++)
		cin>>arr[i];
	string word;
	cin>>word;	
	for(i=0;i<word.length();i++)
	{
		k=((int)word[i])-97;
		if(max<arr[k]) max=arr[k];
	}	
	cout<<max*word.length();                                               //Area = max * word.length() 
}
