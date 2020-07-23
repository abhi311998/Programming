#include <bits/stdc++.h>
using namespace std;
int main() {
	short t;
	cin>>t;
	while(t--)
	{
	    int num;
	    int i,n;
		bool flag=0;
	    cin>>num;
	    if(num==0)
	    {
	    	cout<<0;
		}
		else
	    {
	    vector<char> str;
	    while(num!=0)
	    {
	        if(num%2==1) str.push_back('1');
	        else str.push_back('0');
	        num=num/2;
	    }
		n=str.size();
		for(i=0;i<n;i+=1)
		{
			if(str[i]=='1') break;
		}
		cout<<i+1;
		}
	    cout<<"\n"; 
	}
	return 0;
}
