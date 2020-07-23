#include <bits/stdc++.h>
using namespace std;
int main() {
	short t;
	cin>>t;
//	cout<<t;
	while(t--)
	{
	    long long num;
	    int i,n,flag=0;
	    cin>>num;
	    if(num!=0)
	    {
	    char ch;
	    vector<char> str;
	    while(num!=0)
	    {
	        if(num%2==1) ch='1';
	        else ch='0';
			str.push_back(ch);
	        num=num/2;
	    }
		n=str.size();
	    if(str[n-1]=='1')
	    {
	        for(i=0;i<n-1;i++)
	        {
	            if(str[i]!='0') 
	            {
	                flag=1;
	                break;
	            }
	        }
	    }
		}
	    if(flag==0) cout<<"YES";
	    else cout<<"NO";
	    cout<<"\n"; 
	}
	return 0;
}
